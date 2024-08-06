from ...... import utils
from ...... import component


class AttackLinuxSystemShutdownComponent(component.Component):
    """Create Hidden File in Linux."""

    name = "linux-system-shutdown"
    verbose_name = "Linux System Shutdown"
    description = "Linux System Shutdown with the asumption root privileges"
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

    blueprints = ["cmake-cpp"]
    function = "linux_shutdown"

    def generate(self):
        source = utils.source(__name__, "linux-shutdown.cpp")
        self.functions = [source]
        self.calls = {"main": ["${}();".format(self.function)]}
        self.globals = [self.function]
