#include <stdio.h>

int main(){
    FILE *fptr;

    //fptr = fopen("file.txt", "w");

    //fptr = fopen("file.txt", "a");

    //printf(fptr, "Hello World!");

    fptr = fopen("file.txt", "r");

    char mystring[255];

    fgets(mystring, 255, fptr);

    printf("%s", mystring);


    fclose(fptr);

}