#include <stdio.h>
#include <stdlib.h>

int main(){

    int *ptr1, *ptr2, size;


    size = 4 * sizeof(*ptr1);
    ptr1 = malloc(size);
    *ptr1 = 25;

    printf("%d bytes allocated at address %p \n", size, ptr1);



    
    return 0;
}