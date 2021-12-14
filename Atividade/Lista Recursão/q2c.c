#include <stdio.h>
int fibonnaci(int Qtd_terms);

int main()
{
	int num;
	printf("Digite quantos números deseja  na lista: ");
	scanf("%d", &num);
	printf("Fibonacci = %d\n", fibonnaci(num));
	return 0;
}
int fibonnaci(int Qtd_terms)
{
	if(Qtd_terms <= 1)
		return Qtd_terms;
	return fibonnaci(Qtd_terms - 1) + fibonnaci(Qtd_terms - 2);
}
