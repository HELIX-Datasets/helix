from .... import utils


class AttackLinuxSystemShutdownComponent(utils.SimpleTemplatedComponent):
    """Create Hidden File in Linux."""

    name = "linux-system-shutdown"
    verbose_name = "Linux System Shutdown"
    description = "Linux System Shutdown"
    version = "1.0.0"
    type = "att&ck"
    date = "2024-07-22 :9:00.000000"
    tags = (
        ("family", "att&ck"),
        ("category", "impact"),
        ("technique", "system-shutdown"),
        ("id", "T1529"),
        ("name", "linux-shutdown"),
    )

    source = "linux-shutdown.cpp"
    function = "linux_shutdown"
