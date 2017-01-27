//Programa que realiza el MD5 de un arhivo, pasandole como argumento dicho archivo
#include <string.h>
#include <openssl/md5.h>
#include<stdio.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
int main(int argc, char *argv[])
{
    unsigned char digest[MD5_DIGEST_LENGTH]; 
    unsigned char data[1024];
    MD5_CTX mdContext;//es una estructura que esta en md5.h 
    int archivo,bytes;

    if(argc<2) //se verifica que el programa tenga sólo un argumento
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

	MD5_Init(&mdContext);//inicializa la estructuraa
	while((bytes=read(archivo,data,1024))!=0) //guarda en bloques mientras se cumpla
		MD5_Update(&mdContext,data,bytes);//realiza la operacion por cada bloque
	MD5_Final(digest,&mdContext);
	int i;
	for(i = 0; i < MD5_DIGEST_LENGTH; i++)
        printf("%02x", digest[i]); 
    printf("\n");
    close(archivo);
    return 0;
}
