#include <stdio.h>

typedef struct {
    
    int num_1;
    int num_2;
    int num_3;
    int num_4;
} numeros; numeros valores /* Def variável Struct*/;

numeros leitor_numeros(int p,int s,int t,int q){
    numeros valores;
    
    printf ("Digite o Primeiro Valor:\n"); 
    scanf ("%d",&valores.num_1); 
    
    printf ("Digite o segundo Valor:\n"); 
    scanf ("%d",&valores.num_2); 
    
    printf ("Digite o Terceiro Valor:\n"); 
    scanf ("%d",&valores.num_3); 
    
    printf ("Digite o Quarto Valor:\n"); 
    scanf ("%d",&valores.num_4); 
    
    return valores;
}

int main(){
    int num_1,num_2,num_3,num_4;
    
    
    numeros valores = leitor_numeros(num_1,num_2,num_3,num_4);
    printf ("O Primeiro valor %d\n",valores.num_1); /*variável da Struct*/ 
    printf ("O segundo  valor %d\n",valores.num_2);
    printf ("O Terceiro valor %d\n",valores.num_3);
    printf ("O Quarto   valor %d\n",valores.num_4);
    
}
