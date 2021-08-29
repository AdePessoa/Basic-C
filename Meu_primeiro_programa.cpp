#include <stdio.h> //biblioteca para impressão printf
#include <locale.h> //biblioteca para acentos

int main()
{
	setlocale(LC_ALL, "Portuguese"); //colocando acentos em Português 
	printf("Olá mundo, este é meu primeiro programa em C!");
}
