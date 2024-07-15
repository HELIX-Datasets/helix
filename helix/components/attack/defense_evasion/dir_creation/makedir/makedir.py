from .... import utils

class AttackLinuxCreateHiddenDirComponent(utils.SimpleTemplatedComponent):
    """Create Hidden Dir in Linux."""
    name = "linux-create-hidden-dir"
    verbose_name = "Linux Create Hidden Directory"
    description = "Linux Create Hidden Directory"
    version = "1.0.0"
    type = "att&ck"
    date = "2024-07-15 :8:30.000000"
    tags = (
        ("family", "att&ck"),
        ("category", "defense-evasion"),
        ("technique", "hidden-directory"),
        ("id", "T1564"),
        ("name", "linux-create-dir"),
    )

    options = {"path":{}}

    source = "linux-create-dir.cpp"
    function = "new_dir"