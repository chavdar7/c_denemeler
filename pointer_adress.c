#include <stdio.h>

int main(){

    int number = 5;
    int *p;
    p = &number;
    
    printf("Address of number variable: %p\n", &number);
    printf("Address of number variable +1: %p\n", &number+1);
    printf("Address of p variable: %p\n", p);
    printf("Value of p variable: %d\n", *p);
    
    return 0;
}