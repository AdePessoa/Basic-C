#include <stdio.h>
#include <locale.h>

int main ()
{
	int opcao;
	setlocale(LC_ALL, "Portuguese");
	
	do
	{
	
		
		printf("********** MENU **********\n");
		printf("     1 - Batata Frita     \n");
		printf("     2 - Alm�ndegas       \n");
		printf("     3 - Bife Acebolado   \n");
		printf("     4 - Prato Feito      \n");
		printf("     0 - Sair do Menu     \n\n");
		printf("     Op��o = ");
		
		scanf("%d", &opcao);
		
		switch(opcao)
		{ 
		case 1:
			printf("Batata frita \n");
			break;
		case 2:
			printf("Alm�ndegas \n");
			break;
		case 3:
			printf("Bife Acebolado \n");
			break;
		case 4:
			printf("Prato Feito \n");
			break;	
			
		default:
			if (opcao != 0)
			{
				printf("Op��o inv�lida \n");
			}	
		}
	} while (opcao !=0);
}
