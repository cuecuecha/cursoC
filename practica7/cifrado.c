//programa que cifra a nivel de bits

#include<stdio.h>

int main()
{
	int a[]={'a','b','c','d'};
	int llave[]={'r','p','y','z'};
	int cifrado[5];
	int i;
	
	printf("El mensaje cifrado: \n");
	for(i=0; i<sizeof(a)/sizeof(int);i++)
	{
		cifrado[i] = a[i]^llave[i];
		printf("%c",cifrado[i]);
	}
	
	printf("\n\nEl mensaje descifrado:\n");

        for(i=0; i<sizeof(a)/sizeof(int);i++)
        {
                printf("%c",cifrado[i]^llave[i]);
        }
	printf("\n\n");
	return 0;
}
