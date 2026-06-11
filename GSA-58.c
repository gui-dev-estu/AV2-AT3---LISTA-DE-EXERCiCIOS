#include <stdlib.h>
#include <stdio.h>

int main() {

    printf("\n****************************************************");
    printf("\n aluno:GUILHERME SANTIAGO ARAUJO - RA 0022278");
    printf("\n GSA-58: A Calculadora de Bolso de 4 Operacoes");
    printf("\n****************************************************");

    float num1, num2, resultado;
    char operacao;

    printf("\nDigite o primeiro numero: ");
    scanf("%f", &num1);

    printf("\nDigite o segundo numero: ");
    scanf("%f", &num2);

    printf("\nDigite a operacao (+, -, *, /): ");
    scanf(" %c", &operacao);

    switch(operacao) {

        case '+':
            resultado = num1 + num2;
            printf("\nResultado: %.2f\n", resultado);
            break;

        case '-':
            resultado = num1 - num2;
            printf("\nResultado: %.2f\n", resultado);
            break;

        case '*':
            resultado = num1 * num2;
            printf("\nResultado: %.2f\n", resultado);
            break;

        case '/':
            resultado = num1 / num2;
            printf("\nResultado: %.2f\n", resultado);
            break;

        default:
            printf("\nOperacao matematica nao reconhecida.\n");
    }

    return 0;
}
