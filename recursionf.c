#include <stdio.h>

int toplama(int number){
    if (number == 0){
        return number;
    }
    
    return number + toplama(number-1);
}

int main(){
    
    int hello = toplama(5);
    
    printf("%d", hello);
    /*
    
    */
    
    return 0;
}