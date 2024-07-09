#include <stdio.h>
#include <string.h>

int new_file_6be1752fc988415790066473ca7377fa(int argv, char* argc[]){

    FILE *fpoint;

    char fileData[50]= "Hello, this is a warning";

    // filePath = "/home/gl33203/Downloads/trial1.txt";

    fpoint = fopen("/home/gl33203/Downloads/trial1.txt","w");

    if (fpoint == NULL){
        printf("File failed to open.\n");
    }
    else{
        printf("The file is created succesfully.\n");

        if (strlen(fileData) > 0){
            fputs(fileData, fpoint);
            fputs("\n", fpoint);
        }

        fclose(fpoint);
        printf("Data succesfully written in file.\n");
    }

    return 0;
}


int main(int argc, char **argv) {
    new_file_6be1752fc988415790066473ca7377fa(argc, argv);

    return 0;
}
