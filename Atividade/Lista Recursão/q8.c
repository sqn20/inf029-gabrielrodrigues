#include <stdio.h>
int mdc(int num1, int num2);

int main()
{
	int num1, num2;
	
	printf("Digite um número qualquer: ");
	scanf("%d", &num1);
	printf("Digite outro número qualquer: ");
	scanf("%d", &num2);
	
	int resultado = mdc(num1, num2);
	printf("MDC: %d\n", resultado);
	
	return 0;
}

int mdc(int num1, int num2)
{
	if(num2 == 0)
		return num1;
	else
		return mdc(num1, num1%num2);
}