/* Usu�rio entra com dois valores num�ricos que correspondem a um intervalo de n�meros quaisquer, sendo que, ap�s essa entrada
de dados, o processamento dever� apresentar todos os n�meros pares desse intervalo */


#include <stdio.h>

int main ()

{
	int valor1, valor2;
	
	printf("Entre com o valor inicial do intervalo: ");
	scanf("%d", &valor1);
	
	printf("Entre com o valor final do intervalo: ");
	scanf("%d", &valor2);
	
	//identifica os n�meros pares no intervalo solicitado
	
	for (valor1; valor1 <= valor2; valor1++)
	{
		if (valor1 %2 == 0)
		{
			printf("%d ", valor1);
		}
	}
}
