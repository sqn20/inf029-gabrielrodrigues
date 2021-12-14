#include <stdio.h>
#include <stdlib.h>
#define Tam 12; 

int factorial(int number){
    if (number == 0)
        return 1;
    else if (number < 0){
        printf("Enable to calculate negative number factorial");
        exit(0);
    }
    
    return number * factorial(number -1);
}

int main (){
    int number = Tam;
    printf("%d", factorial(number));
    return 0;
}