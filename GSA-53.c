#include <stdlib.h>
#include <stdio.h>

int main() {

    printf("\n****************************************************");
    printf("\n aluno:GUILHERME SANTIAGO ARAUJO - RA 0022278");
    printf("\n GSA-53: Confirmar saida com 's'");
    printf("\n****************************************************");

    char opcao;

    do {

        printf("\nOperacao realizada.");
        printf("\nDeseja sair? (s para sair): ");
        scanf(" %c", &opcao);

    } while(opcao != 's');

    printf("\nPrograma encerrado.\n");

    return 0;
}
