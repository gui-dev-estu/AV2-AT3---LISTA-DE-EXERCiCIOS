#include<stdlib.h>
#include<stdio.h>


int main() {
	
	printf("\n****************************************************");
	printf("\n aluno:GUILHERME SANTIAGO ARAUJO - RA 0022278");
	printf("\n GSA-25: Notas e aprovaçao");
	printf("\n ****************************************************");
	
	float nota;
	printf("digite sua media final:");
	scanf("%f",&nota);
	
	if(nota>=6){
		printf("aprovado");
	}
	
	else if (nota>=1){
		printf("recuperaçao");
	}
	else{
		printf("reprovado");
	}
	
	
	
	
	
	
	
}
