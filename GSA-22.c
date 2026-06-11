#include<stdlib.h>
#include<stdio.h>


int main() {
	
	printf("\n****************************************************");
	printf("\n aluno:GUILHERME SANTIAGO ARAUJO - RA 0022278");
	printf("\n GSA-22: Par ou impar");
	printf("\n ****************************************************");
	
	int num;
	
	printf("\n digite um numero:");
	scanf("%d",&num);
	
	 if (num % 2 == 0) {
        printf("O numero e par.\n");
    } else {
        printf("O numero e impar.\n");
    }

    return 0;
}
	
