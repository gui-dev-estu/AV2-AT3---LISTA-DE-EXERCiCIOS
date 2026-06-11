#include <stdlib.h>
#include <stdio.h>

int main() {

    printf("\n****************************************************");
    printf("\n aluno:GUILHERME SANTIAGO ARAUJO - RA 0022278");
    printf("\n GSA-52: Soma ate o numero ser multiplo de 10");
    printf("\n****************************************************");

    int numero, soma = 0;

    do {

        printf("\nDigite um numero: ");
        scanf("%d", &numero);

        soma = soma + numero;

    } while(numero % 10 != 0);

    printf("\nSoma total: %d\n", soma);

    return 0;
}
