#include <stdio.h>
int Dig(int x, int dig);

int main()
{
	int num;
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	int valor;
	printf("Digite o digito que procura: ");
	scanf("%d", &valor);
	
	printf("O digito ocorre %d vezes\n", Dig(num, valor));
	return 0;
}

int Dig(int x, int dig)
{
	if(x == 0)
		return x;
	int procura = x % 10;
	if(procura == dig)
		return 1 + Dig(x / 10, dig);
	return Dig(x / 10, dig);
	
}