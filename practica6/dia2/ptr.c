///EJEMPLO BASICO DE APUNTADORES
#include<stdio.h>
int main()
{
	int a=23;
	int *ptr=&a;
	printf("Direccion en memoria: %p\n",ptr);
	printf("Contenido: %d\n",*ptr);
}
