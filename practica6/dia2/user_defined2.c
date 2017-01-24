/*
Ejemplo typedef y union
*/
#include<stdio.h>
typedef unsigned char BYTE;
union bec{
	BYTE b1;
	BYTE b2;
};
int main()
{
	union bec b;
	b.b1='F';
	printf("%c",b.b1);
	printf("%c",b.b2);
}
