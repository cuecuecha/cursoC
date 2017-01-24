#include<stdio.h>

int main()
{
	int i,numero;
	printf("\t\t\n***Programa que imprime n numeros nones**\n\n");
	printf("Digite el numero: "); scanf("%i",&numero);
	for(i=1;i<=numero;i++)
	{
		if(i%2==1)
		{
			printf("%i\n",i);
		}
	}
	
	return 0;
}
