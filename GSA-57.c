#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {

    printf("\n****************************************************");
    printf("\n aluno:GUILHERME SANTIAGO ARAUJO - RA 0022278");
    printf("\n GSA-57: A Central do Brinquedo Eletronico");
    printf("\n****************************************************");

    char cor[20];

    printf("\nDigite a cor: ");
    scanf("%s", cor);

    if(strcmp(cor, "Verde") == 0) {
        printf("\nO urso diz: Vamos brincar la fora!\n");
    }
    else if(strcmp(cor, "Amarelo") == 0) {
        printf("\nO urso diz: Estou ficando com soninho...\n");
    }
    else if(strcmp(cor, "Vermelho") == 0) {
        printf("\nO urso diz: Estou com fome, hora do lanche!\n");
    }
    else {
        printf("\nCor desconhecida.\n");
    }

    return 0;
}
