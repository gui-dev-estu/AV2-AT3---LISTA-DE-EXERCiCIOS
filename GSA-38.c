#include <stdlib.h>
#include <stdio.h>

int main() {

    printf("\n****************************************************");
    printf("\n aluno:GUILHERME SANTIAGO ARAUJO - RA 0022278");
    printf("\n GSA-38: Senha correta");
    printf("\n****************************************************");

    int senha;

    while(senha != 1234) {

        printf("\nDigite a senha: ");
        scanf("%d", &senha);

        if(senha != 1234) {
            printf("\nSenha incorreta!\n");
        }
    }

    printf("\nAcesso liberado!\n");

    return 0;
}
