#include <stdio.h>

int main(){

    int sayi1, sayi2, toplam;
    int *ptr1, *ptr2;

    printf("İki sayıyı toplama");

    printf("\n");

    printf("İlk sayıyı girniz:");
    scanf("%d", &sayi1);

    printf("İkinci sayıyı girniz:");
    scanf("%d", &sayi2);

    ptr1 = &sayi1;
    ptr2 = &sayi2;

    toplam = *ptr1 + *ptr2;

    printf("\n");


    printf("%d", toplam);






    return 0;
}