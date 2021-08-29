#include <stdio.h>
#include <locale.h>

int main( )
{
	int tabuada, num;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite o número da tabuada: ");
	scanf("%d", &tabuada);
	
//laço for
	printf("Primeira forma utilizando for: ");		
	for(num=1; num<=10; num ++)
	{
		printf("\n %d x %d = %d ", tabuada, num, tabuada*num);
	}	

//laço while
	printf("\n Segunda forma utilizando while: ");	
	num=1;
	while(num<=10)
	{
		printf("\n %d x %d = %d ", tabuada, num, tabuada*num);
		num++;	
	}

//laço do... while
	printf("\n Terceira forma utilizando do...while: ");		
	num=1;
	do
	{
		printf("\n %d x %d = %d ", tabuada, num, tabuada*num);
		num++;	
	} while(num <= 10);
	
/*	//Alternativa
	printf("\n %d x %d = %d ", tabuada, 1, tabuada*1);
	printf("\n %d x %d = %d ", tabuada, 2, tabuada*2);
	printf("\n %d x %d = %d ", tabuada, 3, tabuada*3);
	printf("\n %d x %d = %d ", tabuada, 4, tabuada*4);
	printf("\n %d x %d = %d ", tabuada, 5, tabuada*5);
	printf("\n %d x %d = %d ", tabuada, 6, tabuada*6);
	printf("\n %d x %d = %d ", tabuada, 7, tabuada*7);
	printf("\n %d x %d = %d ", tabuada, 8, tabuada*8);
	printf("\n %d x %d = %d ", tabuada, 9, tabuada*9);
	printf("\n %d x %d = %d ", tabuada, 10, tabuada*10);
*/
}
