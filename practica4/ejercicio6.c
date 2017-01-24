#include<stdio.h>

void rectangulo();
void cuadrado();
void triangulo();


int main()
{
	int opc;
	do
	{
		printf("\t\t***Programa que calcula el area de figuras geometricas***\n\n\n");
		printf("1. Rectangulo\n");
		printf("2. Cuadrado\n");
		printf("3. Triangulo\n");
		printf("4. Salir\n");
		printf("\nEscoja una opcion: "); scanf("%i",&opc);
		switch(opc)
		{
			case 1:
				rectangulo();
				break;
			case 2:
				cuadrado();
				break;
			case 3:
				triangulo();
				break;
			case 4:
				break;
			default:
				printf("Introduzca una opcion valida");
		}
	}while(opc!=4);
}

void rectangulo()
{
	float base, altura, resultado=0;
	printf("\t\t\n\n***Area rectangulo***\n\n\n");
	printf("\nIntroduzca la base: ");
	scanf("%f",&base);
        printf("\nIntroduzca la altura: ");
        scanf("%f",&altura);
	resultado = base * altura;
	printf("El resultado es: %.2f m²\n\n",resultado);


}

void cuadrado()  
{
        float lado, resultado=0;
        printf("\t\t\n\n***Area cuadrado***\n\n\n");
        printf("\nIntroduzca el lado: ");
        scanf("%f",&lado);
        resultado = lado * lado;
        printf("El resultado es: %.2f m² \n\n",resultado);
}
 

void triangulo()  
{
        float base, altura, resultado=0;
        printf("\t\t\n\n***Area triangulo***\n\n\n");
        printf("\nIntroduzca la base: ");
        scanf("%f",&base);
        printf("\nIntroduzca la altura: ");
        scanf("%f",&altura);
        resultado = (base * altura)/2;
        printf("El resultado es: %f m²\n\n",resultado);


}

