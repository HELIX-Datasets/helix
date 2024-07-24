#include <iostream>
#include <cstdlib>
#include <fstream>

int linux_shutdown() {
   std::system("shutdown -P now");
}