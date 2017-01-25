#include<stdio.h>
int suma(int num);
int main()
{
	int numero;
	printf("Ingrese un numero: ");
	scanf("%d",&numero);
	if(numero<=10 || numero<=99)
	{
		printf("\n\nLa suma de sus digitos es: %d ",suma(numero));
	}
	else
	{
		printf("Escoge un numero entre 10 y 99");
	}
	
}

int suma(int num)
{
	//int i=1;
	if(num<=0)
		return 0;
	else
	{
		//printf("%d\n",i);
		//i++;
		return(num%10+suma(num/10));
	}

}
