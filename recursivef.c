#include <stdio.h>
#include <stdlib.h>

//factorial
int fact(int n){

    if(n==1){
        return 1;
    }

    return n*fact(n-1);
}

//fibonacci
int fibo(int n){

    if (n <= 1){
        return n;
    }

    return fibo(n-1) + fibo(n-2);
}

//exponansiyel
double expo(double base, int us){

    if(us==0){
        return 1;
    }

    if(us<0){
        return 1.0 / expo(base, -us);
    }


    return base * expo(base, us-1);
    // base
}


int main(){

    int sayi = 9;

    printf("%d sayısının %d. kuvveti: %f", 3,5, expo(3,5));

    return 0;
}

