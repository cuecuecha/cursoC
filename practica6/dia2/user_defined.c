/*
Ejemplo Structs y campos de bits.
*/
#include<stdio.h>
#include<string.h>
struct becario{
	char nombre[12];
	int edad;
	float promedio;
	char procedencia[12];
	int generacion;
	unsigned int proyecto:1;
};
int main()
{
	struct becario bec;
	strcpy(bec.nombre,"Fernando");
	printf("%s\n",bec.nombre);
	bec.proyecto=2;
	printf((bec.proyecto&1)?"SI\n":"SIN PROYECTO\n");
}
