#include<stdio.h>

int main()
{
	char pass[20],compara[20];
	int error=3;
	printf("\t\t***Programa que valida el password que introduces***\n\n");
	printf("Intrduce el password: ");
	gets(pass);
	
	printf("%s\n",pass);
	do
	{
		printf("Instrduce de nuevo tu password: ");
		gets(compara);
		if(strcmp(pass,compara)==0)
		{
			printf("Ok \n");
			break;
		}
		else
		{
			printf("GTFOH \n\n");
			error--;
		}
	}while(error!=0);
}
