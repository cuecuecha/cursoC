#include<stdio.h>

int main()
{
	int i,numero;
	printf("\t\t***Prgrama que imprime n numeros***\n\n\n");
	printf("Digite el numero: "); scanf("%i",&numero);
	for(i=0;i<=numero;i++)
	{
		printf("%i\n",i);
	}
	return 0;
}
