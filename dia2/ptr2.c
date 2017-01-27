#include<stdio.h>
#include<stdlib.h>
//int atoi(char*);
int main(int argc, char *argv[])//
{
	if(argc<2)
	{
		fprintf(stderr,"Se necesita un argumento!");
		exit(1349);
	}	
	//printf("%d\n",argc);
	printf("%d\n",atoi(argv[argc-1])); //
	//printf("%d",argc);
	return 0;

}
//int atoi(char *num)
//{
//	return strtol(num,NULL,10);
//}
