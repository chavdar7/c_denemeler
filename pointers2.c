#include <stdio.h>

int main(){

    int m = 200;
    double fx = 200.600006;
    char cht = 'z'; 

    int *p1;
    double *p2;
    char *p3;

    p1 = &m;
    p2 = &fx;
    p3 = &cht;

    printf("Address of m: %p\n", p1);
    printf("Address of fx: %p\n", &fx);
    printf("Address of cht: %p\n", &cht);

    printf("\n");

    printf("m in adresteki değeri : %d\n", m);
    printf("fx in adresteki değeri : %f\n", *p2);
    printf("cht in adresteki değeri : %c\n", *(&cht));

    printf("\n");


}