#include<stdio.h>
#include<stdlib.h>


int main(){
	
	printf("\n****************************************************");
	printf("\n aluno:GUILHERME SANTIAGO ARAUJO - RA 0022278");
	printf("\n GSA-16: multiplo de 3 e ou 5");
	printf("\n ****************************************************");
	
	int numpedido;
	
	printf("\n informe o numero do seu pedido: ");
	scanf("%d", &numpedido);
	
	 if (numpedido % 3 == 0 && numpedido % 5 == 0) {
		
		printf("\n Parabens voce ganhou um refrigerante e uma sobremesa");
	}
	else if  (numpedido % 3 ==0){
		printf("\n Parabens voce ganhou um refrigerante");
	}
	
	else if(numpedido % 5 ==0){
		printf("\n Parabens voce ganhou uma sobremesa");
	}
	
	else{
		printf("\n Infelizmente nao foi dessa vez, boa sorte na proxima");
	}
	



    return 0;
}
	
	
	
	
