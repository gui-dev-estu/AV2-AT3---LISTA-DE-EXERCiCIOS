#include <stdlib.h>
#include <stdio.h>

int main() {

    printf("\n****************************************************");
    printf("\n aluno:GUILHERME SANTIAGO ARAUJO - RA 0022278");
    printf("\n GSA-39: Verificar se um numero e positivo");
    printf("\n****************************************************");

    int numero = 0;

    while(numero <= 0) {

        printf("\nDigite um numero positivo: ");
        scanf("%d", &numero);

        if(numero <= 0) {
            printf("\nNumero invalido!\n");
        }
    }

    printf("\nNumero positivo digitado: %d\n", numero);

    return 0;
}
