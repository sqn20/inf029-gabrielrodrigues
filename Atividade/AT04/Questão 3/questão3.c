#include <stdio.h> 

int n; 

int fatorial(int n){
    int fat; 
    
    
    if (n > 0){
    for (fat = 1 ; n > 1 ; n = n-1){
        fat = fat * n; 
    }
    }
    
    if (n < 0 ){
        fat == 0; 
    }
    
    return(fat);
}

int main(){
    int operador; 
    
    printf ("Digite o Valor que deseja o Fatorial:\n");
    scanf ("%d", &n); 
    
    operador = fatorial(n);
    
    if (operador == 0) {printf ("Valor Digitado inválido\n");
    }
    
    printf ("%d",operador);
}