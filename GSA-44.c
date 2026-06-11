#include <stdlib.h>
#include <stdio.h>

int main() {

    printf("\n****************************************************");
    printf("\n aluno:GUILHERME SANTIAGO ARAUJO - RA 0022278");
    printf("\n GSA-44: Contar digitos de um numero");
    printf("\n****************************************************");

    int numero, digitos = 0;

    printf("\nDigite um numero positivo: ");
    scanf("%d", &numero);

    while(numero > 0) {

        numero = numero / 10;
        digitos++;
    }

    printf("\nQuantidade de digitos: %d\n", digitos);

    return 0;
}
