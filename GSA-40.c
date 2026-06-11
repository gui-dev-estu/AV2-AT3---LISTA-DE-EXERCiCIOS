#include <stdlib.h>
#include <stdio.h>

int main() {

    printf("\n****************************************************");
    printf("\n aluno:GUILHERME SANTIAGO ARAUJO - RA 0022278");
    printf("\n GSA-40: Tabuada com while");
    printf("\n****************************************************");

    int numero, i = 1;

    printf("\nDigite um numero: ");
    scanf("%d", &numero);

    printf("\nTabuada do %d:\n", numero);

    while(i <= 10) {
        printf("%d x %d = %d\n", numero, i, numero * i);
        i++;
    }

    return 0;
}
