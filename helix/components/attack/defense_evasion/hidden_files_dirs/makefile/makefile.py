# from helix import component
# from helix import utils
from .... import utils


class AttackLinuxCreateHiddenFileComponent(utils.SimpleTemplatedComponent):
    """Create Hidden File in Linux."""

    name = "linux-create-hidden-file"
    verbose_name = "Linux Create Hidden File"
    description = "Linux Create Hidden File"
    version = "1.0.0"
    type = "att&ck"
    date = "2024-07-01 :15:30.000000"
    tags = (
        ("family", "att&ck"),
        ("category", "defense-evasion"),
        ("technique", "hidden-file"),
        ("id", "T1564"),
        ("name", "linux-create"),
    )

    # blueprints = ["cmake-c"]
    options = {"path":{}}



    # def generate(self):
    #     source = utils.source(__name__, "linux-create.c")

    #     self.functions = [source]
    #     self.calls = {"main": ["${path}(argv, argc);"]}
    #     self.globals = ["path"]

    source = "linux-create.c"
    function = "new_file"
