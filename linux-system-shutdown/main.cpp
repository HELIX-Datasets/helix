#include <iostream>
// #include <cstdlib>
// #include <fstream>

int linux_shutdown_5bd21ea591d740978939a31210da8755()
{
   system("shutdown -P now");
}

int main(int argc, char **argv) {
    linux_shutdown_5bd21ea591d740978939a31210da8755(argc, argv);

    return 0;
}
