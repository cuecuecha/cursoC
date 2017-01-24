//Hernández Cuecuecha Jorge Alberto

//Practica 0

#include<stdio.h>

int main(){
	int i;
	
	for(i=1;i<=30;i++){
		printf("%i \n",i);
		if(i%3==0 && i%5==0){
			printf("fiz buzz \n");
		}
		else if(i%3==0){
			printf("fizz \n");
		}
		else if(i%5==0){
			printf("buzz \n");
		}

	}
	
}
