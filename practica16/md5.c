#include <string.h>
#include <openssl/md5.h>
#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
FILE *archivo;
int main(int argc, char *argv[])
{

	#if 0
		if(argc<2)
		{
			perror("Se necesita un argumento\n");
			return(1111);
		}
	#endif


    	unsigned char digest[MD5_DIGEST_LENGTH];
	archivo = fopen(argv[1],"r");
	if(archivo==NULL)
	{
		printf("Error al tratar de abrir el archivo");
		return 1;
	}
    	MD5((unsigned char*)&archivo,sizeof(archivo),(unsigned char*)&digest);    
	
    	char mdString[33];
    	int i;
	for(i = 0; i < 16; i++)
        	sprintf(&mdString[i*2], "%02x", (unsigned int)digest[i]);
    	printf("md5 digest: %s\n", mdString);
	fclose(archivo);
    	return 0;
}
