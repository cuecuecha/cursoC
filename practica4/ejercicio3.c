#include<stdio.h>

int main()
{
	int i,numero,primo,min_primo=2;
	printf("\t\t\n***Programa que imprime n numeros primos**\n\n");
	printf("Cuantos numeros primos quieres: "); scanf("%i",&numero);
	
	while(numero>0)
	{
		primo=1;
		for(i=2;i<min_primo;i++)
		{
			printf("iteracion min_primo: %i \n\n",min_primo);
			if(min_primo%i==0)
			{
			 	printf("entro al if\n");
				primo=0;
				break;
			}
		}
		if(primo)
		{
			printf("%i\n",min_primo);
			numero--;
		}
		min_primo++;
	}
	
	
	return 0;
}
