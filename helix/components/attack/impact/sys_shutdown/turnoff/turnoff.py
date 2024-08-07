from ...... import utils
from ...... import component


class AttackWindowsSystemShutdownComponent(component.Component):
    """Turn Off Windows System."""

    name = "windows-system-shutdown"
    verbose_name = "Windows System Shutdown"
    description = "Widnows System Shutdown with the asumption admin privileges"
    version = "1.0.0"
    type = "att&ck"
    date = "2024-07-22 :9:00.000000"
    tags = (
        ("family", "att&ck"),
        ("category", "impact"),
        ("technique", "system-shutdown"),
        ("id", "T1529"),
        ("name", "windows-turnoff"),
    )

    blueprints = ["cmake-cpp"]
    function = "windows_turnoff"

    def generate(self):
        source = utils.source(__name__, "windows-turnoff.cpp")
        self.functions = [source]
        self.calls = {"main": ["${}();".format(self.function)]}
        self.globals = [self.function]
