#include <stdio.h>
#include <string.h>

int ${new_file}(int argv, char* argc[]){

    FILE *fpoint;

    char fileData[50]= "Hello, this is a warning";


    fpoint = fopen(${path},"w");

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
