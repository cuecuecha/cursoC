//practica 14
//Programa que genera un numero aleatorio desde /dev/random

#include<stdio.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
int main(int argc, char *argv[])
{

#if 0
	if(argc<2)
	{
		perror("Se necesita un argumento\n");
		return(1111);
	}
#endif

	int fd; //Declaracion de un descriptor de archivos.
	char *archivo="/dev/random\0";
	int numero;
	fd=open(archivo,O_RDONLY);
	
	/*
	open --> -1 si no se puede abrir
	append --> escribe al final, no se sobreescribe
	S_IRUSR --> set- read user(RU)
	*/
	
	if(fd==-1)
		fprintf(stderr,"No se pudo abrir o crear el archivo");
	printf("Descriptor de archivo: %d\n",fd);

//#if 0
	
	if(read(fd,numero,sizeof(int))==-1)
		printf("%u\n",numero);
//#endif

	if(close(fd)==-1)
		fprintf(stderr,"No se pudo cerrar el descriptor de archivo");
}
