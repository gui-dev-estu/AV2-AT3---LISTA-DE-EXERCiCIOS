#include<stdlib.h>
#include<stdio.h>


int main() {
	
	printf("\n****************************************************");
	printf("\n aluno:GUILHERME SANTIAGO ARAUJO - RA 0022278");
	printf("\n GSA-19: Ordem Crescente(tres numeros)");
	printf("\n ****************************************************");
	

	int p1,p2,p3,pos;
	
	printf(" \n Digite as tres posiçoes: ");
	scanf("%d %d %d",&p1,&p2,&p3);
		
if (p1 > p2) {
        pos = p1;
        p1 = p2;
        p2 = pos;
    }

    if (p1 > p3) {
        pos = p1;
        p1 = p3;
        p3 = pos;
    }

    if (p2 > p3) {
        pos = p2;
        p2 = p3;
        p3 = pos;
    }

    printf("Ordem crescente: %d %d %d\n", p1, p2, p3);
	return 0;
}

