//programa que suma dos valores y valida que sean enteros

#include<stdio.h>
#include<ctype.h>
//int isdigit(int); //prototipo
int main()
{
	char a,b;
	int suma=0;
	int repite = 1;
	int y,x;
	
//	do
//	{
		printf("Ingrese los dos valores separados por un espacio: ");
		scanf("%c %c",&a,&b);
		fflush(stdin);
		if(isdigit(a) && isdigit(b))
		{
			x= (int)(a-48); //resto 48 para que sea el equivalente a numero entero
			y= (int)(b-48);
			suma = x + y;
			printf("El resultado es: %d\n\n",suma);
	//		repite = 0;

		}
		else
		{
			printf("No se introdujo un numero entero\n");
		}
	//}while(repite);

	return 0;
}
