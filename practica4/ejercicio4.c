#include<stdio.h>

int main()
{
	char carac;
	printf("\t\t\n***Programa que imprime en hexadecimal el caracter introducio**\n\n");
	printf("Introduzca el caracter: "); scanf("%c",&carac);
	
	printf("En hexadecimal es: %#x \n",carac);
	return 0;
}
