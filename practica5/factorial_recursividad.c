/*
recursividad: funcion que se llama a si misma
	1. caso base
	2. caso recursivo
	
	a(){
	if(n=1){
		return n;  CASO BASE
	}
	else{
		a(x menos un caracter)  CASO RECURSIVO
	}
	
	}
*/

//FACTORIAL

#include<stdio.h>
long factorial();

int main(){
	int numero;
	long x = 0;
	printf("Digite un numero: ");
	scanf("%i",&numero);
	
	printf("\nEL factorial de  %i es: %li",numero,factorial(numero));
	
	return 0;
}

/*
4! = 4*3!
3! = 3*2!
2! = 2*1!
1! = 1

ya que llega al caso base, sube

*/

long factorial(int n){
	if(n<=1){
		return 1;
	}
	else{
		return (n*factorial(n-1));
	}
}






