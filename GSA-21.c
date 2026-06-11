#include<stdlib.h>
#include<stdio.h>


int main() {
	
	printf("\n****************************************************");
	printf("\n aluno:GUILHERME SANTIAGO ARAUJO - RA 0022278");
	printf("\n GSA-21: numero positivo ou negativo");
	printf("\n ****************************************************");
	
	int num;
	
	printf("digite um numero:");
	scanf("%d",&num);
	
	if(num<0){
		printf("numero negativo");
	}
	
	else if(num>0){
		printf("numero positivo");
		
	}
	
	else{
		printf("zero");
	}
return 0;	
}
