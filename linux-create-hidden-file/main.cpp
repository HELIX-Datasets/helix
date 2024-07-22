#include <iostream>
#include <fstream> 
using namespace std;

int new_file_f006bc4c4b424c3a9c1c3b040a1cc3ab(int argv, char* argc[]){

    ofstream file("/home/gl33203/test/.test.txt");

    file << "Hello, this is a warning!";

    file.close();

}

int main(int argc, char **argv) {
    new_file_f006bc4c4b424c3a9c1c3b040a1cc3ab(argc, argv);

    return 0;
}
