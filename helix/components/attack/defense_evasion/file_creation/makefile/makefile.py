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

    options = {"path": {}}

    source = "linux-create.cpp"
    function = "new_file"
