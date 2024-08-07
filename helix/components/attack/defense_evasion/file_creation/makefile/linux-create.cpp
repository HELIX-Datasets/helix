#include <iostream>
#include <fstream>
using namespace std;

int ${new_file}(int argv, char *argc[])
{

    ofstream file(${path});

    file << "Hello, this is a warning!";

    file.close();
}