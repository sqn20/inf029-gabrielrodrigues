#include <stdio.h>
#define Tam 7 

int dobrofat(int numero){
    if (numero == 1)
        return numero;
    if (numero % 2 != 0)
        return numero * dobrofat(numero -1);
    
    return dobrofat(numero - 1);
}

int main(){
    printf("%d", dobrofat(Tam));
    return 0;
}