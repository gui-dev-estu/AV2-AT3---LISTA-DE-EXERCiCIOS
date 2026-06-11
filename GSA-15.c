#include<stdio.h>
#include<stdlib.h>


int main(){
	
	printf("\n****************************************************");
	printf("\n aluno:GUILHERME SANTIAGO ARAUJO - RA 0022278");
	printf("\n GSA-15: quantas caixas cabem em um caminhao");
	printf("\n ****************************************************");
	
	float alturacami=3.5;
	float comprimentocami=23;
	float largcami=2.5;
	float alturacx=0.8;
	float comprimentocx=0.20;
	float larguracx=0.20;
	
	
	int totalcx,qtdAltura, qtdLargura, qtdComprimento;
	
	qtdAltura = alturacami / alturacx;
    qtdLargura = largcami / larguracx;
    qtdComprimento = comprimentocami / comprimentocx;

    
    totalcx = qtdAltura * qtdLargura * qtdComprimento;
    
      printf("\n Total de caixas que cabem no caminhao: %d\n", totalcx);

    return 0;
}
	
	
	
	
