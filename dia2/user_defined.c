/*
Ejemplo Structs y campos de bits.
*/

/*
Campo de bits.--> establecer limites
*/
#include<stdio.h>
#include<string.h> //para strcpy
struct becario{
	char nombre[12];
	int edad;
	float promedio;
	char procedencia[12];
	int generacion;
	unsigned int proyecto:1; //campo de bit --> aclaramos que tantos bits va a ocupar
};
int main()
{
	struct becario bec;
	strcpy(bec.nombre,"Fernando"); //(a donde va, cadena)
	printf("%s\n",bec.nombre);
	bec.proyecto=2; //
	printf((bec.proyecto&1)?"SI\n":"SIN PROYECTO\n");
}
