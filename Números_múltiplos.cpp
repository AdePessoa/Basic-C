/* Algoritmo que conta de 1 a 100 e a cada m�ltiplo de 10 emite uma mensagem: "x � m�ltiplo de 10" */

#include <stdio.h>

int main ()

{
	int aux;
	
	for (aux=1; aux <= 100; aux++)
	{
		if (aux % 10 == 0)
		{
			printf("%d � m�ltiplo de 10. \r\n", aux);
		}
	}
}
