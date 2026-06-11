#include <stdlib.h>
#include <stdio.h>

int main() {

    printf("\n****************************************************");
    printf("\n aluno:GUILHERME SANTIAGO ARAUJO - RA 0022278");
    printf("\n GSA-47: Tabuada de um numero");
    printf("\n****************************************************");

    int numero, i = 1;

    printf("\nDigite um numero: ");
    scanf("%d", &numero);

    printf("\nTabuada do %d:\n", numero);

    do {

        printf("%d x %d = %d\n", numero, i, numero * i);
        i++;

    } while(i <= 10);

    return 0;
}
