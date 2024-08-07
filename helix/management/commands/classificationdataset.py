import os
import math
import json
import uuid
import random
import traceback
import numpy as np
import matplotlib.pyplot as plt
from helix import component as helix_component

from ... import build
from ... import utils
from .. import utils as mutils


class SamplingError(Exception):
    """Raised when there is a problem generating a sample list."""


def load_components(bhlx_dir):
    """Load Blind Helix Components to HELIX from given path."""

    components_cls = []
    components_dict = {}
    for subdir, _, files in os.walk(bhlx_dir):
        for file in files:
            if file.endswith(".bhlx"):
                file_path = os.path.join(subdir, file)
                with open(file_path, "r") as f:
                    components_cls.extend(helix_component.load(f))
            for component in components_cls:
                components_dict[component.name] = component
    return components_dict


def generate_centroids(n_class, class_distance):
    """Generation of the coordinates of centroids for the classification classes randomly.

    Note: Centroids are equidistant points on the graph and they are the
        reference point for the classification class.
    """

    centroids = []
    angle_step = 360 / n_class

    for i in range(n_class):
        angle = np.deg2rad(i * angle_step)
        x = math.floor(class_distance * np.cos(angle))
        y = math.floor(class_distance * np.sin(angle))
        centroids.append((x, y))

    return np.array(centroids)


def classification_tags(class_coordinates, n_components, components_list):
    """Randomly selects n components for the classes. These components
        act as the tags for the class.
    """

    class_components = []
    comp_in_use = set()
    for tags in class_coordinates:
        class_tags = tuple(tags)

        # Check if the components have been already selected to avoid repetition
        while True:
            selected_components = tuple(random.choices(components_list, k=n_components))
            if selected_components not in comp_in_use:
                comp_in_use.add(selected_components)
                break
        c = {class_tags: {selected_components}}
        class_components.append(c)
    return class_components


def component_selection(
    classification_classes, sample_num, num_components, components_list
):
    """Selection of the components for each of the samples per class.

    All the components per sample are being permuted randomly.
    Each sample belonging to the class will have a set of components to be permuted
    ensuring the samples does not have the same components as the class.
    """

    comp_dict = []
    min_permutations = math.floor(num_components - (num_components - 1))
    max_permutations = num_components - 1

    def generate_permutation(original, available_components, comp_to_permute):
        element_list = list(original[0])
        componentList_copy = list(available_components)

        for _ in range(comp_to_permute):
            index_to_permute = random.choice(range(len(element_list)))
            index_to_choose = random.choice(range(len(componentList_copy)))
            new_component = componentList_copy[index_to_choose]
            element_list[index_to_permute] = new_component
            componentList_copy.pop(index_to_choose)
        return tuple(element_list)

    for class_dict in classification_classes:

        for class_centroid, elements in class_dict.items():

            original = list(elements)

            available_components = set(components_list) - set(original)

        permuted_elements = {}
        for i in range(sample_num):
            comp_to_permute = random.randint(min_permutations, max_permutations)
            permuted_elements[f"sample_{i+1}"] = generate_permutation(
                original, available_components, comp_to_permute
            )

        c = {class_centroid: {"original": original, **permuted_elements}}
        comp_dict.append(c)

    return comp_dict


def class_sample_paring(results_c):
    """Provides the samples with their respective components.

        Each class will contain all the components per sample. 
    """

    options = []
    sample_components = {}
    i = 1
    for class_samples in results_c:
        for class_tag, samples in class_samples.items():
            options.append(samples["original"])
            component_names = []
            for sample_name, sample_comps in samples.items():
                if sample_name != "original":
                    options.append(sample_comps)
                    component_names.append(sample_comps)

            class_name = "class_" + str(i)
            sample_components.update({class_name: component_names})
            i += 1
    return sample_components


def sample_distance(results_c):
    """Provides the distance of each sample from the centroid.

    Calculates the distance using the intersection of the sample components and the centroid divided
    by the union of the sample components and the centroid. The angle to calculate the coordinate is determined
    randomly.
    """

    distance = {}
    for centroid in results_c:
        for class_tag, data in iter(centroid.items()):
            flatten_list = [element for tup in data["original"] for element in tup]
            class_components = set(flatten_list)
            samples_distances = {}
            for key, permuted in data.items():
                if key != "original":
                    sample_components = set(permuted)
                    intersection = sample_components.intersection(class_components)
                    union = sample_components.union(class_components)
                    sample_distance = abs(len(intersection)) / abs(len(union))
                    samples_distances[key] = round(sample_distance, 2)
            distance[class_tag] = samples_distances

    return distance


def classfication_graph(sample_distance, classes, sample_num, num_components, output):
    """Classification dataset results.

    A graph is generated to provide visualization of the classification classes
    and the results of the dataset.
    """

    graph_name = "classification_graph.png"
    graph_path = os.path.join(output, graph_name)
    cmap = plt.colormaps["gist_rainbow"]
    inc = 1 / len(classes)
    class_num = 1
    for class_centroid, distance_dict in iter(sample_distance.items()):
        rbga = cmap(inc)
        inc = inc + 1 / len(classes)
        centroid_x, centroid_y = class_centroid
        label_str = "class_" + str(class_num)
        class_num = class_num + 1
        plt.scatter(
            centroid_x,
            centroid_y,
            color=rbga,
            alpha=1,
            edgecolors="black",
            label=label_str,
        )

        for sample_number, s_distance in iter(distance_dict.items()):
            angle = round(math.radians(random.uniform(0, 360)), 2)
            x = round(centroid_x + s_distance * math.cos(angle), 2)
            y = round(centroid_y + s_distance * math.sin(angle), 2)
            plt.scatter(x, y, color=rbga, alpha=0.4)

    num_classes = len(classes)
    plt.legend(
        loc="upper center",
        bbox_to_anchor=(0.5, -0.05),
        fancybox=True,
        shadow=True,
        ncol=5,
    )
    plt.title(
        f"Classification Dataset with {num_classes} Classes\n Samples per Class: {sample_num} Components per Sample: {num_components} "
    )
    plt.xticks([])
    plt.yticks([])
    plt.savefig(graph_path)

    return graph_path


def process(blueprint, function_names, bhlxClasses_dict, class_name, sample, working):
    identifier = uuid.uuid4()

    class_dir = os.path.join(working, class_name)

    if not os.path.exists(class_dir):
        os.makedirs(class_dir)
        print(f"Generated directory {class_dir}")

    configuration = {
        "name": identifier.hex,
        "blueprint": {"name": blueprint},
    }

    comps = bhlxClasses_dict

    configuration["components"] = [utils.parse(c) for c in sample]

    for specification in configuration["components"]:
        name = specification["name"]

        # Replace the component's name with the class to be able to build the sample
        for c in sample:
            if c == name:
                comp_class = comps.get(name)
                specification["class"] = comp_class

                try:
                    value = specification.pop("name")
                    specification["name"] = value
                except:
                    print("Error erasing component value")
                    continue

    configuration["transforms"] = []

    project = os.path.join(class_dir, identifier.hex)

    os.makedirs(project)

    stdout = os.path.join(project, "stdout.txt")
    stderr = os.path.join(project, "stderr.txt")

    with open(stdout, "wb") as stdout, open(stderr, "wb") as stderr:
        try:
            _, tags = build.build(
                configuration,
                os.path.join(class_dir, identifier.hex),
                options={
                    "stdout": stdout,
                    "stderr": stderr,
                },
            )
        except Exception as e:
            print(
                "{} {}: {}".format(
                    mutils.format("✗", color=mutils.Color.red), identifier.hex, e
                )
            )

            with open(os.path.join(project, "exception.txt"), "w") as f:
                traceback.print_exc(file=f)

            return {}

    # Selects only the functions used in the sample as tags
    bhlx_functions = []
    class_functions = []
    class_functions.append(class_name)
    for name in function_names.get(class_name):
        class_functions.append(name)
    bhlx_functions.append(class_functions)
    for tag in tags:
        for c in sample:
            if tag[1] == c:
                new_func = []
                new_func.append(tag[0])
                new_func.append(tag[1])
                bhlx_functions.append(new_func)

    print(
        "{} {}".format(
            mutils.format("✓", color=mutils.Color.green),
            identifier.hex,
        )
    )

    return {identifier.hex: bhlx_functions}


class Command(mutils.CommandBase):
    """Generate a classification dataset from a collection of Blind HELIX Components.

    .. code-block:: none

        usage: helix classification-dataset [-h] [-dir [BLIND HELIX DIRECTORY [BHLX DIRECTORY ...]]]  [-c CLASS_NUMBER] [-d DISTANCE]
                                        [-s SAMPLE-COUNT] [-m MAXIMUM_SAMPLES] [-n COMPONENT_COUNT] [-w WORKERS] [-v]
                                        output

        positional arguments:
          output                output directory where dataset should be written

        optional arguments:
          -h, --help            show this help message and exit
          -dir [BLIND HELIX  DIRECTORY [DIRECTORY ...]], --bhlx-dir [BLIND HELIX  DIRECTORY [ BHLX DIRECTORY ...]]
                                Blind Helix Directory with .bhlx files to include components
          -c CLASS_NUMBER, --class-number CLASS_NUMBER
                                number of classes to generate
          -d DISTANCE,     --distance DISTANCE
                                distance bewteen centroids for class generation
          -s SAMPLE_COUNT, --sample-count SAMPLE_COUNT
                                number of samples to attempt to generate
          -m MAXIMUM_SAMPLES, --maximum-samples MAXIMUM_SAMPLES
                                maximum number of samples to generate
          -n COMPONENT_COUNT, --component-count COMPONENT_COUNT
                                number of components per sample
          -w WORKERS, --workers WORKERS
                                number of parallel workers to use (default: <count(CPUs)/2>)
    """

    name = "classification-dataset"
    help = (
        "generate a classification dataset from a collection of Blind HELIX components"
    )

    def add_arguments(self, parser):

        parser.add_argument(
            "output", type=str, help="output directory where dataset should be written"
        )
        parser.add_argument(
            "-dir",
            "--bhlx-dir",
            type=str,
            required=True,
            help="directory to load Blind HELIX components",
        )
        parser.add_argument(
            "-c",
            "--class-number",
            type=int,
            default=2,
            help="number of classes to generate",
        )
        parser.add_argument(
            "-d",
            "--distance",
            type=int,
            default=4,
            help="distance bewteen centroids for class generation",
        )
        parser.add_argument(
            "-s",
            "--sample-count",
            type=int,
            default=5,
            help="number of samples to attempt to generate",
        )
        parser.add_argument(
            "-m",
            "--maximum-samples",
            type=int,
            default=None,
            help="maximum number of samples to generate",
        )
        parser.add_argument(
            "-n",
            "--component-count",
            type=int,
            default=5,
            help="number of components per sample",
        )
        parser.add_argument(
            "-w",
            "--workers",
            metavar="WORKERS",
            type=int,
            default=round(os.cpu_count() / 2),
            help="number of parallel workers to use (default: <count(CPUs)/2>)",
        )

    def handle(self, *args, **options):
        output = os.path.abspath(os.path.expanduser(options["output"]))

        if os.path.isdir(output):
            pass
        else:
            try:
                os.makedirs(output)
            except Exception as e:
                mutils.print(e, color=mutils.Color.red)
                exit(1)

        print(options)
        bhlx_dir = options.get("bhlx_dir")
        num_centroids = options.get("class_number")
        class_distance = options.get("distance")
        num_components = options.get("component_count")
        sample_num = options.get("sample_count")

        bhlxClasses_dict = load_components(bhlx_dir)
        components_list = list(bhlxClasses_dict.keys())
        class_coordinates = generate_centroids(num_centroids, class_distance)
        classification_classes = classification_tags(
            class_coordinates, num_components, components_list
        )      
        results_c = component_selection(
            classification_classes, sample_num, num_components, components_list
        )

        function_names = dict()
        i = 1
        for clss in classification_classes:
            for centorid, list_comps in iter(clss.items()):
                class_name  = "class_" + str(i)
                function_names[class_name] = list(list_comps.pop())
                i += 1


        blueprints = set.intersection(
            *[set(c.blueprints) for c in bhlxClasses_dict.values()]
        )

        if len(blueprints) > 1:
            mutils.print(
                "multiple possible blueprints found: {}".format(", ".join(blueprints)),
                color=mutils.Color.red,
            )
            exit(1)
        elif len(blueprints) < 1:
            mutils.print(
                "no common blueprint that supports all components could be found",
                color=mutils.Color.red,
            )
            exit(1)

        blueprint = blueprints.pop()

        try:
            samples = class_sample_paring(results_c)

        except SamplingError as e:
            mutils.print(e, color=mutils.Color.red)
            exit(1)

        # for key, sample in iter(samples.items()):
        #     print(key, sample)

        print(
            "building {} samples with {} workers".format(
                mutils.format(len(classification_classes), style=mutils.Style.bold),
                mutils.format(options["workers"], style=mutils.Style.bold),
            )
        )

        arguments = [
            (
                blueprint,
                function_names,
                bhlxClasses_dict,
                class_name,
                component_list,
                output,
            )
            for class_name, sample in iter(samples.items())
            for component_list in sample
        ]

        graph = sample_distance(results_c)

        # if options["workers"] == 1:
        results = [process(*a) for a in arguments]
        # else:
        #     print("before process!")
        #     with multiprocessing.Pool(options["workers"]) as pool:
        #         results = pool.starmap(process, arguments)

        results = [r for r in results if r]

        if "maximum_samples" in options:
            results = results[: options["maximum_samples"]]

        labels = {}
        for result in results:
            labels.update(result)

        with open(os.path.join(output, "labels.json"), "w") as f:
            json.dump(labels, f)

        # total_samples = num_centroids * sample_num

        # print(
        #     "built {} samples in {}".format(
        #         mutils.format(total_samples, style=mutils.Style.bold),
        #         mutils.format(output, style=mutils.Style.bold),
        #     )
        # )

        resuls_graph = classfication_graph(
            graph, classification_classes, sample_num, num_components, output
        )
        print(resuls_graph)

        print(
            "Classification Dataset generated with {} classes in {}".format(
                mutils.format(len(classification_classes), style=mutils.Style.bold),
                mutils.format(output, style=mutils.Style.bold),
            )
        )
