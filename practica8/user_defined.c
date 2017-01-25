/*
Programa que guarda 
*/
#include<stdio.h>
#include<string.h> //para strcpy
struct becario{
	char nombre[12];
	int edad;
	float promedio;
	char procedencia[12];
	int generacion;
	unsigned int proyecto:1; //campo de bit --> aclaramos que tantos bits va a ocupar
};
int main()
{
	struct becario bec;
	strcpy(bec.nombre,"Fernando");
	bec.edad=22;
	bec.promedio=9.4;
	strcpy(bec.procedencia,"FI");
	bec.generacion=11;
	printf("%s\n",bec.nombre);
	printf("Edad: %d\n",bec.edad);
	printf("Promedio %.2f\n",bec.promedio);
	printf("Procedencia: %s\n",bec.procedencia);
	printf("Generacion: %d\n",bec.generacion);
	bec.proyecto=1;
	printf((bec.proyecto&1)?"CON PROYECTO\n":"SIN PROYECTO\n");

	//segundo becario

        strcpy(bec.nombre,"\nDiana");
        bec.edad=22;
        bec.promedio=9.0;
        strcpy(bec.procedencia,"FI");
        bec.generacion=11;
        printf("%s\n",bec.nombre);
        printf("Edad: %d\n",bec.edad);
        printf("Promedio %.2f\n",bec.promedio);
        printf("Procedencia: %s\n",bec.procedencia);
        printf("Generacion: %d\n",bec.generacion);
        bec.proyecto=1;
        printf((bec.proyecto&1)?"CON PROYECTO\n":"SIN PROYECTO\n");

	//tercer becario
        strcpy(bec.nombre,"\nJorge");
        bec.edad=22;
        bec.promedio=9.3;
        strcpy(bec.procedencia,"FI");
        bec.generacion=11;
        printf("%s\n",bec.nombre);
        printf("Edad: %d\n",bec.edad);
        printf("Promedio %.2f\n",bec.promedio);
        printf("Procedencia: %s\n",bec.procedencia);
        printf("Generacion: %d\n",bec.generacion);
        bec.proyecto=1;
        printf((bec.proyecto&1)?"CON PROYECTO\n":"SIN PROYECTO\n");

	//cuarto becario
        strcpy(bec.nombre,"\nJonhatan");
        bec.edad=25;
        bec.promedio=8.5;
        strcpy(bec.procedencia,"FI");
        bec.generacion=11;
        printf("%s\n",bec.nombre);
        printf("Edad: %d\n",bec.edad);
        printf("Promedio %.2f\n",bec.promedio);
        printf("Procedencia: %s\n",bec.procedencia);
        printf("Generacion: %d\n",bec.generacion);
        bec.proyecto=2;
        printf((bec.proyecto&1)?"CON PROYECTO\n":"SIN PROYECTO\n");

	//quinto becario
        strcpy(bec.nombre,"\nLuis");
        bec.edad=24;
        bec.promedio=8.5;
        strcpy(bec.procedencia,"FI");
        bec.generacion=11;
        printf("%s\n",bec.nombre);
        printf("Edad: %d\n",bec.edad);
        printf("Promedio %.2f\n",bec.promedio);
        printf("Procedencia: %s\n",bec.procedencia);
        printf("Generacion: %d\n",bec.generacion);
        bec.proyecto=2;
        printf((bec.proyecto&1)?"CON PROYECTO\n":"SIN PROYECTO\n");
	
	//sexto becario
        strcpy(bec.nombre,"\nTovar");
        bec.edad=22;
        bec.promedio=8.5;
        strcpy(bec.procedencia,"FI");
        bec.generacion=11;
        printf("%s\n",bec.nombre);
        printf("Edad: %d\n",bec.edad);
        printf("Promedio %.2f\n",bec.promedio);
        printf("Procedencia: %s\n",bec.procedencia);
        printf("Generacion: %d\n",bec.generacion);
        bec.proyecto=2;
        printf((bec.proyecto&1)?"CON PROYECTO\n":"SIN PROYECTO\n");


	//septimo becario
        strcpy(bec.nombre,"\nIvan");
        bec.edad=25;
        bec.promedio=8.6;
        strcpy(bec.procedencia,"FI");
        bec.generacion=11;
        printf("%s\n",bec.nombre);
        printf("Edad: %d\n",bec.edad);
        printf("Promedio %.2f\n",bec.promedio);
        printf("Procedencia: %s\n",bec.procedencia);
        printf("Generacion: %d\n",bec.generacion);
        bec.proyecto=1;
        printf((bec.proyecto&1)?"CON PROYECTO\n":"SIN PROYECTO\n");

	//octavo becario
        strcpy(bec.nombre,"\nCoffrey");
        bec.edad=22;
        bec.promedio=8.0;
        strcpy(bec.procedencia,"FI");
        bec.generacion=11;
        printf("%s\n",bec.nombre);
        printf("Edad: %d\n",bec.edad);
        printf("Promedio %.2f\n",bec.promedio);
        printf("Procedencia: %s\n",bec.procedencia);
        printf("Generacion: %d\n",bec.generacion);
        bec.proyecto=2;
        printf((bec.proyecto&1)?"CON PROYECTO\n":"SIN PROYECTO\n");
	return 0;
}
