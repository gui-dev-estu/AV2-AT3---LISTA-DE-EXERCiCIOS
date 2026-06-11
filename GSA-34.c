#include<stdlib.h>
#include<stdio.h>


int main() {
	
	printf("\n****************************************************");
	printf("\n aluno:GUILHERME SANTIAGO ARAUJO - RA 0022278");
	printf("\n GSA-34: verificar se um numero e primo");
	printf("\n ****************************************************");

	int numero, i, divisores = 0;

    printf("\nDigite um numero: ");
    scanf("%d", &numero);

    for(i = 1; i <= numero; i++) {
        if(numero % i == 0) {
            divisores++;
        }
    }

    if(divisores == 2) {
        printf("\n%d e primo.\n", numero);
    } else {
        printf("\n%d nao e primo.\n", numero);
    }
	
	return 0;
}
