#include <stdio.h>
#define Tam 10

int pad(int numero){
    if (numero <= 2)
        return 1;
    
    return pad(numero - 2) + pad(numero - 3);
}


int main(){

    printf("%d", pad(Tam));

    return 0;
}