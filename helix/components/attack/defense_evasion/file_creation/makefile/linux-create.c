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

        if (strlen(fileData) > 0){
            fputs(fileData, fpoint);
            fputs("\n", fpoint);
        }

        fclose(fpoint);
    }

    return 0;
}