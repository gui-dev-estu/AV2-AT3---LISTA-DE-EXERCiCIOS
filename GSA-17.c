#include<stdio.h>


int main(){
	
	printf("\n****************************************************");
	printf("\n aluno:GUILHERME SANTIAGO ARAUJO - RA 0022278");
	printf("\n GSA-17: O sensor do parque tematico");
	printf("\n ****************************************************");
	
	float altura;
	
	printf("\n Qual sua altura em metros?:");
	scanf("%f", &altura);
	
	if(altura>=1.4){
		printf("\n LUZ VERDE, acesso liberado");
	}
	
	else{
		printf("LUZ VERMELHA, acesso negado");
	}
	
	return 0;
}
