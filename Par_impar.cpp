#include <stdio.h>
#include <locale.h>

int main()
{
	int num, vezes;
	
	setlocale(LC_ALL, "Portuguese");
	printf("Digite um n�mero inteiro: ");
	scanf("%d", &num);
		
	if (num % 2 == 0)
	{
		printf("O n�mero %d � par.", num);
	}
	else
	{
		printf("O n�mero %d � �mpar.", num);
	}
//printf("O dobro de %d � %d", num, num*2);
//printf("O triplo de %d � %d", num, num*3);
	vezes = num * 2;
	printf("\nO dobro do n�mero �: %d.", vezes);
	
	vezes = num * 3;
	printf("\nO triplo do n�mero �: %d.", vezes);
	
	printf("\nA metade de %d � %.2f.", num, (float)num/2); //o f � para dizer que � float e retornar casas decimais
	
}
