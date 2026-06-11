#include <stdlib.h>
#include <stdio.h>

int main() {

    printf("\n****************************************************");
    printf("\n aluno:GUILHERME SANTIAGO ARAUJO - RA 0022278");
    printf("\n GSA-60: O Validador de Dias Uteis");
    printf("\n****************************************************");

    int dia;

    printf("\nDigite um numero de 1 a 7: ");
    scanf("%d", &dia);

    switch(dia) {

        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            printf("\nDia Util. Acesso liberado para o trabalho.\n");
            break;

        case 1:
        case 7:
            printf("\nFim de Semana. Predio fechado.\n");
            break;

        default:
            printf("\nNumero de dia invalido.\n");
    }

    return 0;
}
