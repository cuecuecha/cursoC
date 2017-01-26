//Programa que muestra en bytes el tamaño de la variable

#include<stdio.h>

int main()
{
	printf("%u\n",sizeof(char));
	printf("%u\n",sizeof(int));
	printf("%u\n",sizeof(void*));
	printf("%u\n",sizeof(long long int));	
	return 0;
}
