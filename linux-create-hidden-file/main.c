#include <stdio.h>
#include <string.h>
#include <windows.h>

int new_file_f69f1f8c8f3d4c9683fe4e47028abb52(int argv, char* argc[]){

    FILE *fpoint;

    char fileData[50]= "Hello, this is a warning";

    // filePath = "C:\Users\GL33203\Documents\";

    fpoint = fopen("C:\Users\GL33203\Documents\","w");

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
    new_file_f69f1f8c8f3d4c9683fe4e47028abb52(argc, argv);

    return 0;
}
