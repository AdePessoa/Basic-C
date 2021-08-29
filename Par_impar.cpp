#include <stdio.h>
#include <locale.h>

int main()
{
	int num, vezes;
	
	setlocale(LC_ALL, "Portuguese");
	printf("Digite um número inteiro: ");
	scanf("%d", &num);
		
	if (num % 2 == 0)
	{
		printf("O número %d é par.", num);
	}
	else
	{
		printf("O número %d é ímpar.", num);
	}
//printf("O dobro de %d é %d", num, num*2);
//printf("O triplo de %d é %d", num, num*3);
	vezes = num * 2;
	printf("\nO dobro do número é: %d.", vezes);
	
	vezes = num * 3;
	printf("\nO triplo do número é: %d.", vezes);
	
	printf("\nA metade de %d é %.2f.", num, (float)num/2); //o f é para dizer que é float e retornar casas decimais
	
}
