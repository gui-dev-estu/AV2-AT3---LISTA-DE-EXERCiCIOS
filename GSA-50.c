#include <stdlib.h>
#include <stdio.h>

int main() {

    printf("\n****************************************************");
    printf("\n aluno:GUILHERME SANTIAGO ARAUJO - RA 0022278");
    printf("\n GSA-50: Numero positivo obrigatorio");
    printf("\n****************************************************");

    int numero;

    do {

        printf("\nDigite um numero positivo: ");
        scanf("%d", &numero);

    } while(numero <= 0);

    printf("\nNumero valido: %d\n", numero);

    return 0;
}
