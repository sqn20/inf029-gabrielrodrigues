
#include <stdio.h> 

int sub(int a,int b,int c){
	int sub; 

	sub = a - b - c; 

	return (sub); 
}

int main (){
	int num_1,num_2,num_3;
	int operador; 
	int sub();

	printf ("Insira os Valores:\n"); 
	scanf("%d %d %d",&num_1,&num_2,&num_3);


		operador = sub(num_1,num_2,num_3);

	printf ("%d",operador);  

	return 0;
}