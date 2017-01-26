#include<stdio.h>
int recursiva(int);
int main()
{
	printf("%d\n",recursiva(5));	
}
int recursiva(int x)
{
	
		return (x>=1)?x*recursiva(x-1):1;
}
