#include <stdlib.h>
#include <stdio.h>

int main() {

    printf("\n****************************************************");
    printf("\n aluno:GUILHERME SANTIAGO ARAUJO - RA 0022278");
    printf("\n GSA-43: Soma dos pares entre 1 e 100");
    printf("\n****************************************************");

    int numero = 2, soma = 0;

    while(numero <= 100) {

        soma = soma + numero;
        numero = numero + 2;
    }

    printf("\nSoma dos numeros pares entre 1 e 100: %d\n", soma);

    return 0;
}
