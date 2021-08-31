# include <stdio.h>
# include <locale.h>

int main ()
{
	int tabu1, tabu2, aux;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite o valor da primeira tabuada: ");
	scanf("%d", &tabu1);
	
	printf("Digite o valor da segunda tabuada: ");
	scanf("%d", &tabu2);
	
	if (tabu1 > 0 && tabu2 > 0 && tabu1 <= tabu2)
	{
		while (tabu1 <= tabu2)
		{
			for (aux = 1; aux <= 10; aux++)
			{
				printf("%d x %d = %d \n", tabu1, aux, tabu1*aux);
			}
			tabu1++; // para que o laço de repetição não entre em loop
			printf("\n");
		}
	}
	else
	{
		printf("Atenção! Os valores informados estão incorretos.");
	}
		
}
