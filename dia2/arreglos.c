#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	//Un arreglo se puede definir de la siguiente manera.
	int i[]={'a','b','c','d','e','f','g','h','i','j','k'};
	//Tambien puede ser definido con el tamano por defecto.
	char k[10];
	//Un arreglo al igual que cualquier variable en C no es mas que un fragmento de memoria.
	char *ptr="Arreglo"; //Por lo que definirlo como apuntador, es pusible;

	//Un arreglo tambien puede ser definido por medio de memoria dinamica, con la funcion calloc
	char *ptr_d=(char *) calloc(sizeof(char),60);
	strcpy(ptr_d,"DINAMICO");
	int a;
	for(a=0;a<sizeof(i)/sizeof(int);a++) //divide el numero elementos entre 
	{
		printf("0x%x\n",i[a]);
		k[a]=i[a];
		printf("%c\n",k[a]);
	}

	printf("%s\n",ptr);
	printf("%s\n",ptr_d);
	free(ptr_d);//libera memoria
}
