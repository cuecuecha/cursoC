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
	int fd;
	char *archivo="/dev/input/event0";
	struct input_event ev;
	
	fd=open(archivo,O_RDONLY);
	if(fd==-1)
		printf("No se pudo abrir el archivo");
	printf("Descriptor: %d",fd);
	while(1)
	{

		read(fd,&ev,sizeof(struct input_event));
		if(ev.value == 1)
		{
			//printf("%i\n",ev.code);
		switch(ev.code){
			case 0x001e: printf("a\n"); break;
        		case 0x0030: printf("b\n"); break;
        		case 0x002e: printf("c\n"); break;
		        case 0x0020: printf("d\n"); break;
		        case 0x0012: printf("e\n"); break;
		        case 0x0021: printf("f\n"); break;
		        case 0x0022: printf("g\n"); break;
		        case 0x0023: printf("h\n"); break;
		        case 0x0017: printf("i\n"); break;
		        case 0x0024: printf("j\n"); break;
		        case 0x0025: printf("k\n"); break;
		        case 0x0026: printf("l\n"); break;
		        case 0x0032: printf("m\n"); break;
		        case 0x0031: printf("n\n"); break;
		        case 0x0018: printf("o\n"); break;
		        case 0x0019: printf("p\n"); break;
		        case 0x0010: printf("q\n"); break;
		        case 0x0013: printf("r\n"); break;
		        case 0x001f: printf("s\n"); break;
		        case 0x0014: printf("t\n"); break;
		        case 0x0016: printf("u\n"); break;
		        case 0x002f: printf("v\n"); break;
		        case 0x0011: printf("w\n"); break;
		        case 0x002d: printf("x\n"); break;
		        case 0x0015: printf("y\n"); break;
		        case 0x002c: printf("z\n"); break;
			case 0x001c: printf("\n"); break;
			case 0x0060: printf("\n"); break;
			default: printf("No definido"); break;
		}
			
			}
	}
	close(fd);
	return 0;
}
