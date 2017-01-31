//Programa que muestra el tamaño de un archivo
#include<fcntl.h>
#include <string.h>
#include<stdio.h>
#include<sys/stat.h>
#include<unistd.h>
int main(int argc, char *argv[])
{
    int archivo,tamanio=0;

    if(argc!=2) //se verifica que el programa tenga sólo un argumento
    {
    	printf("Se necesita un argumento, ruta del archivo\n");
    	return 1;
    }

	
	archivo=open(argv[1],O_RDONLY); //archivo en modo lectura 

	if(archivo==-1)
	{
		fprintf(stderr,"Error al abrir el archivo");
		return -1;
	}
	tamanio=lseek(archivo,0L,SEEK_END);
	printf("El tamanio es %.2f kilobytes\n",(float)tamanio/1000);
	printf("El tamanio es %d  bytes \n",tamanio);
	printf("El tamanio es %d bits \n",tamanio*8);
    close(archivo);
    return 0;
}
