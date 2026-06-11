#include<stdlib.h>
#include<stdio.h>


int main() {
	
	printf("\n****************************************************");
	printf("\n aluno:GUILHERME SANTIAGO ARAUJO - RA 0022278");
	printf("\n GSA-30: fatorial de um numero");
	printf("\n ****************************************************");

	 int numero,i,fatorial ;
     

    printf("\nDigite um numero: ");
    scanf("%d", &numero);

    for(i = 1; i <= numero; i++) {
        fatorial = fatorial * i;
    }

    printf("\nO fatorial de %d e: %d\n", numero, fatorial);
	
	return 0;
}
