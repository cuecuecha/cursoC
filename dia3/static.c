#include<stdio.h>
int main()
{
	int x = 10;
	char c[x];
	c[0]='h';
	c[1]='o';
	c[2]='l';
	c[3]='a';
	c[4]='\0';
	for(int i=0;i<10;i++)
	{
		if(c[i]=='\0')
			break;
		printf("%c\n",c[i]);
	}
}
