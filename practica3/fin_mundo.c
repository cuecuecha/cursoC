/*
Programa que muestra la fecha maxima que soporta time_t, desde el origen en 1-01-1970
*/
#include<stdio.h>
#include<time.h>
#include<limits.h>
int main()
{
	time_t t = INT_MAX; //guardo el máximo valor que tiene un long int
	time_t* pt1=&t;  //guarda la direccion de memoria de t1
	char* sTptr=ctime(pt1); //ctime recibe los segundos que seran transformandos a una fecha
	printf("El fin del mundo es: %s ",sTptr);//imprimo la fecha
	return 0;
}
