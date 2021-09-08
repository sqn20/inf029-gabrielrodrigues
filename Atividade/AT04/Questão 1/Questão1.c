#include <stdio.h> 

int soma(int a, int b){
	int somatorio; 
	somatorio = a + b;
	return (somatorio);   
}

int main(){
	
	int num_1,num_2; 
	int soma();
	int operador;


	printf ("Digite Dois Números:\n"); 
	scanf ("%d",&num_1); 
	scanf ("%d",&num_2);

	operador = soma(num_1, num_2);

	printf ("%d",operador); 

	return 0;
}