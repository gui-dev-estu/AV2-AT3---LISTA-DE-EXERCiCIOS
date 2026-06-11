#include <stdlib.h>
#include <stdio.h>

int main() {

    printf("\n****************************************************");
    printf("\n aluno:GUILHERME SANTIAGO ARAUJO - RA 0022278");
    printf("\n GSA-56: O Menu do Fast-Food Digital");
    printf("\n****************************************************");

    int opcao;

    printf("\nEscolha um combo (1 a 4): ");
    scanf("%d", &opcao);

    switch(opcao) {

        case 1:
            printf("\nCombo Hamburguer + Batata + Refri - R$ 30,00\n");
            break;

        case 2:
            printf("\nCombo Pizza Brotinho + Refri - R$ 25,00\n");
            break;

        case 3:
            printf("\nCombo Salada + Suco Natural - R$ 22,00\n");
            break;

        case 4:
            printf("\nCombo Balde de Frango + Molho - R$ 35,00\n");
            break;

        default:
            printf("\nOpcao invalida! Escolha de 1 a 4.\n");
    }

    return 0;
}
