#include <stdlib.h>
#include <stdio.h>

int main() {

    printf("\n****************************************************");
    printf("\n aluno:GUILHERME SANTIAGO ARAUJO - RA 0022278");
    printf("\n GSA-37: Soma de numeros ate digitar zero");
    printf("\n****************************************************");

    int numero, soma ;

    printf("\nDigite um numero (0 para encerrar): ");
    scanf("%d", &numero);

    while(numero != 0) {
        soma = soma + numero;

        printf("\nDigite um numero (0 para encerrar): ");
        scanf("%d", &numero);
    }

    printf("\nSoma total: %d\n", soma);

    return 0;
}
