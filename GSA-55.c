#include <stdlib.h>
#include <stdio.h>

int main() {

    printf("\n****************************************************");
    printf("\n aluno:GUILHERME SANTIAGO ARAUJO - RA 0022278");
    printf("\n GSA-55: Ler numeros e mostrar o maior");
    printf("\n****************************************************");

    int numero, maior = 0;

    do {

        printf("\nDigite um numero (negativo para sair): ");
        scanf("%d", &numero);

        if(numero > maior) {
            maior = numero;
        }

    } while(numero >= 0);

    printf("\nMaior numero informado: %d\n", maior);

    return 0;
}
