#include <stdio.h> //biblioteca para impress�o printf
#include <locale.h> //biblioteca para acentos

int main()
{
	setlocale(LC_ALL, "Portuguese"); //colocando acentos em Portugu�s 
	printf("Ol� mundo, este � meu primeiro programa em C!");
}
