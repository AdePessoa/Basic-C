/*Contagem regressiva a partir de um n�mero digitado pelo usu�rio */

#include <stdio.h>
#include <locale.h>

int main( )
{
	int contador;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\nDigite um n�mero para contagem regressiva \n\n");
	scanf("%d", &contador);
	
	for(contador;contador>=1;contador--) //contagem regressiva (-- pega valor da vari�vel e diminui de 1 em 1
	{
		printf("%d ",contador);
	}
	return(0);
}
