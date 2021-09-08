#include <stdio.h>
#include <stdlib.h>

int* Leitura_num(int p, int s, int t){
	
	int *num; 
	num = (int *) malloc (3 * sizeof(int));

        num[0] = p; /*(primeiro Número)*/  
        num[1] = s; /*(segundo Número) */
        num[2] = t; /*(Terceiro Número)*/

return num;
}

int main(){
    
	int p,s,t; 
	int *operador; 

	printf ("Digite o Primeiro Valor:\n");  
	scanf ("%d",&p);

	printf ("Digite o Segundo Valor:\n"); 
	scanf ("%d",&s);

	printf ("Digite o Terceiro Valor:\n"); 
	scanf ("%d",&t); 

	operador = Leitura_num(p,s,t);

	printf ("Os Três valores sao: %d %d %d",operador[0],operador[1],operador[2]);  

	free (operador);
	
	return 1;
}