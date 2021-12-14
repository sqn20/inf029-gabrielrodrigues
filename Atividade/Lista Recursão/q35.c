#include <stdio.h>
int conversor(int num2);
int main(void)
{
	int num;
	printf("Digite um valor: ");
	scanf("%d", &num);
	printf("Binario: %d\n", conversor(num));
	
	
	return 0;
}

int conversor(int num2)
{
	if(num2 <= 1)
		return num2;
	else
		return 10 * conversor(num2 / 2) + ( num2 % 2);
}