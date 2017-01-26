#include<stdio.h>
int main()
{
	int x = 10,i;
	char *c[]={'h','o','l','a','\0'};
	for(i=0;i<10;i++)
	{
		if(c[i]=='\0')
			break;
		printf("%c\n",c[i]);
	}
	
	return 0;
}
