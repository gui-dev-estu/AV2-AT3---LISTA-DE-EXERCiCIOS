#include <stdlib.h>
#include <stdio.h>

int main() {

    printf("\n****************************************************");
    printf("\n aluno:GUILHERME SANTIAGO ARAUJO - RA 0022278");
    printf("\n GSA-45: Menu ate escolher sair");
    printf("\n****************************************************");

    int opcao = 0;

    while(opcao != 4) {

        printf("\nMENU");
        printf("\n1 - Consultar saldo");
        printf("\n2 - Sacar");
        printf("\n3 - Depositar");
        printf("\n4 - Sair");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);

        if(opcao == 1) {
            printf("\nSaldo consultado.\n");
        }
        else if(opcao == 2) {
            printf("\nSaque realizado.\n");
        }
        else if(opcao == 3) {
            printf("\nDeposito realizado.\n");
        }
        else if(opcao == 4) {
            printf("\nEncerrando o programa.\n");
        }
        else {
            printf("\nOpcao invalida.\n");
        }
    }

    return 0;
}
