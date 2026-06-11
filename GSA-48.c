#include <stdlib.h>
#include <stdio.h>

int main() {

    printf("\n****************************************************");
    printf("\n aluno:GUILHERME SANTIAGO ARAUJO - RA 0022278");
    printf("\n GSA-48: Menu com opcao de sair");
    printf("\n****************************************************");

    int opcao;

    do {

        printf("\n1 - Mensagem");
        printf("\n2 - Sair");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);

        if(opcao == 1) {
            printf("\nVoce escolheu a mensagem!\n");
        }

    } while(opcao != 2);

    printf("\nPrograma encerrado.\n");

    return 0;
}
