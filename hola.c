//Hernández Cuecuecha Jorge Alberto

#include<stdio.h> //header (preprocesador)
#include<limits.h>
char *cadena = "Hola Mundo \n"; //variables globales

int main() //funcion main()
{
	printf("%s",cadena); //cuerpo de la funcion main()
	printf("El minimo valor de INT es: %d \n",INT_MIN);
	printf("El MAXIMO valor de INT es: %d \n",INT_MAX);

printf("El minimo valor de CHAR es: %d \n",CHAR_MIN);
printf("El maximo valor de CHAR es: %d \n",CHAR_MAX);

printf("El minimo valor de LONG LONG INT es: %ld \n",LLONG_MIN);
printf("El maximo valor de LONG LONG INT es: %ld \n",LLONG_MAX);

printf("El minimo valor de SHRT es: %d \n",SHRT_MIN);
printf("El maximo valor de SHRT es: %d \n",SHRT_MAX);

printf("El minimo valor de LONG INT es: %ld \n",LONG_MIN);
printf("El maximo valor de LONG INT es: %ld ",LONG_MAX);



	return 0;
}
