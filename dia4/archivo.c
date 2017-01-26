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
	char *archivo="/tmp/archivo\0";

	fd=open(archivo,O_WRONLY|O_CREAT|O_APPEND,S_IRUSR|S_IWUSR);
	
	/*
	open --> -1 si no se puede abrir
	append --> escribe al final, no se sobreescribe
	S_IRUSR --> set- read user(RU)
	*/
	
	if(fd==-1)
		fprintf(stderr,"No se pudo abrir o crear el archivo");
	printf("Descriptor de archivo: %d\n",fd);

//#if 0
	//primer parametro el descriptor de arhivo, la cadena y el numero de bytes
	if(write(fd,"hola123.,\n",10)==-1)
		fprintf(stderr,"Error al escribir en el archivo.");
//#endif

	if(close(fd)==-1)
		fprintf(stderr,"No se pudo cerrar el descriptor de archivo");
}
