#include<stdlib.h>
#include<stdio.h>


int main() {
	
	printf("\n****************************************************");
	printf("\n aluno:GUILHERME SANTIAGO ARAUJO - RA 0022278");
	printf("\n GSA-29: numeros pares de 0 ate 50");
	printf("\n ****************************************************");

	int i;

    printf("\nNumeros pares de 0 a 50:");

    for(i = 0; i <= 50; i += 2) {
        printf("%d\n", i);
    }
	
	return 0;
}
