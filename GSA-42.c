#include <stdlib.h>
#include <stdio.h>

int main() {

    printf("\n****************************************************");
    printf("\n aluno:GUILHERME SANTIAGO ARAUJO - RA 0022278");
    printf("\n GSA-42: Quantidade de numeros impares digitados");
    printf("\n****************************************************");

    int numero, i = 1, impares = 0;

    while(i <= 10) {

        printf("\nDigite o %d numero: ", i);
        scanf("%d", &numero);

        if(numero % 2 != 0) {
            impares++;
        }

        i++;
    }

    printf("\nQuantidade de numeros impares: %d\n", impares);

    return 0;
}
