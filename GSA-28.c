#include<stdlib.h>
#include<stdio.h>


int main() {
	
	printf("\n****************************************************");
	printf("\n aluno:GUILHERME SANTIAGO ARAUJO - RA 0022278");
	printf("\n GSA-28: Soma dos 100 numero naturais");
	printf("\n ****************************************************");

	int i, soma = 0;

    for(i = 1; i <= 100; i++) {
        soma = soma + i;
    }

    printf("\nA soma dos numeros de 1 a 100 e: %d\n", soma);
	
	return 0;
}
