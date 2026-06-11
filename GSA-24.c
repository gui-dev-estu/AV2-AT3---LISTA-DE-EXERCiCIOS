#include<stdlib.h>
#include<stdio.h>


int main() {
	
	printf("\n****************************************************");
	printf("\n aluno:GUILHERME SANTIAGO ARAUJO - RA 0022278");
	printf("\n GSA-24: Pode votar?");
	printf("\n ****************************************************");
	
	int idade;
	
	printf("digite sua idade:");
	scanf("%d",&idade);
	
	if(idade>=18){
		printf("Apto para votar");
		
	}
	
	else{
		printf("Inapto para votar");
	}
	return 0;
}
	
	
