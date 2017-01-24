//Programa que hace una division 

#include<stdio.h>

float divide(float,float);

int main()
{
	float resultado = divide(6,5); //manda llamar a la funcion divide
	printf("%.2f\n\n",resultado); //imprime el resultado 
}

float divide(float a,float b)
{
	return (int)a/(int)b;
}
