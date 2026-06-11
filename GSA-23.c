#include<stdlib.h>
#include<stdio.h>


int main() {
	
	printf("\n****************************************************");
	printf("\n aluno:GUILHERME SANTIAGO ARAUJO - RA 0022278");
	printf("\n GSA-23: Maior de dois numeros");
	printf("\n ****************************************************");
	
	int num1,num2;
	
	printf("escreva as duas pontuaçoes:");
	scanf("%d %d",&num1,&num2 );
	
	if(num1>num2){
		printf("Essa foi a maior pontuaçao: %d",num1);
	}
	
	else {
		printf("Essa foi a maior pontuaçao: %d",num2);
	}
		return 0;
	}
