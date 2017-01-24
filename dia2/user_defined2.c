/*
Ejemplo typedef y union
*/

/*
union --> estructura
los elementos que componen la union, sólo ocupa un espacio en memoria
*/
#include<stdio.h>
typedef unsigned char BYTE; //typedef --> permite definir tipos de datos que el usuario, el compilador y ciertos
				//estandares pueden compronder
union bec{
	BYTE b1;
	BYTE b2;
};
int main()
{
	union bec b;
	b.b1='F';
	printf("%c",b.b1);
	printf("%c",b.b2); //ocupa el mismo espacio de memoria que b1
}
