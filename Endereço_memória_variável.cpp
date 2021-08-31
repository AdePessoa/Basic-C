#include <stdio.h>

main()
{
	int x = 5;
	int y = 10;
	printf("\n Valor guardado em x: %d", x);
	printf("\n Valor guardado em y: %d", y);
	printf("\n Endereço de x: %x", &x);
	printf("\n Endereço de y: %x", &y);
}

// %x é para demonstrar o endereço de memória
