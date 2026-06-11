#include <stdlib.h>
#include <stdio.h>

int main() {

    printf("\n****************************************************");
    printf("\n aluno:GUILHERME SANTIAGO ARAUJO - RA 0022278");
    printf("\n GSA-54: Validar numero entre 1 e 5");
    printf("\n****************************************************");

    int numero;

    do {

        printf("\nDigite um numero entre 1 e 5: ");
        scanf("%d", &numero);

    } while(numero < 1 || numero > 5);

    printf("\nNumero valido: %d\n", numero);

    return 0;
}
