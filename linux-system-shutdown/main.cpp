#include <iostream>
#include <cstdlib>
#include <fstream>

int linux_shutdown() {
   std::system("shutdown -P now");
}

int main(int argc, char **argv) {
    linux_shutdown_d065c808fc354acda052334e95d2deed(argc, argv);

    return 0;
}
