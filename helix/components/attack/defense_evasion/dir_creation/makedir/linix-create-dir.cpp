#include <bits/stdc++.h>
#include <iostream>
#include <sys/stat.h>
#include <sys/types.h>
using namespace std;

int ${new_dir}(int argv, char* argc[]){
     // Creating a directory
    if (mkdir(${path}, 0777) == -1)
        cerr << "Error :  " << strerror(errno) << endl;
    else
        cout << "Directory created";
    return 0;
}