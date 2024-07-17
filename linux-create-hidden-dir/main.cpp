#include <bits/stdc++.h>
#include <iostream>
#include <sys/stat.h>
#include <sys/types.h>
using namespace std;

int new_dir_21f01ebb70ea427bacfa337f68d18fa7(int argv, char* argc[]){
     // Creating a directory
    if (mkdir("/home/gl33203/.hola1", 0777) == -1)
        cerr << "Error :  " << strerror(errno) << endl;
    else
        cout << "Directory created";
    return 0;
}

int main(int argc, char **argv) {
    new_dir_21f01ebb70ea427bacfa337f68d18fa7(argc, argv);

    return 0;
}
