#include<stdlib.h>
#include<stdio.h>


int main() {
	
	printf("\n****************************************************");
	printf("\n aluno:GUILHERME SANTIAGO ARAUJO - RA 0022278");
	printf("\n GSA-27: tabuada de um numero");
	printf("\n ****************************************************");
	
	int i,num;
	
	printf("\ndigite um numero para saber sua tabuada ate 10:");
	scanf("%d",&i);
	
	 for(num = 1; num <= 10; num++) {
        printf("%d x %d = %d\n", i, num, i * num);
    }

	
	
	return 0;
}
