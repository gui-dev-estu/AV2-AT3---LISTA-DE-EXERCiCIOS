#include <stdlib.h>
#include <stdio.h>

int main() {

    printf("\n****************************************************");
    printf("\n aluno:GUILHERME SANTIAGO ARAUJO - RA 0022278");
    printf("\n GSA-49: Pedir senha ate acertar");
    printf("\n****************************************************");

    int senha;

    do {

        printf("\nDigite a senha: ");
        scanf("%d", &senha);

    } while(senha != 1111);

    printf("\nAcesso liberado!\n");

    return 0;
}
