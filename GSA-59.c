#include <stdlib.h>
#include <stdio.h>

int main() {

    printf("\n****************************************************");
    printf("\n aluno:GUILHERME SANTIAGO ARAUJO - RA 0022278");
    printf("\n GSA-59: O Assistente de Direcao");
    printf("\n****************************************************");

    char direcao;

    printf("\nDigite uma letra (N, S, L ou O): ");
    scanf(" %c", &direcao);

    switch(direcao) {

        case 'N':
            printf("\nSeguir para o Norte.\n");
            break;

        case 'S':
            printf("\nSeguir para o Sul.\n");
            break;

        case 'L':
            printf("\nVirar a Leste (Direita).\n");
            break;

        case 'O':
            printf("\nVirar a Oeste (Esquerda).\n");
            break;

        default:
            printf("\nComando invalido! Pare o robo.\n");
    }

    return 0;
}
