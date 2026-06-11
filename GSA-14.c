#include<stdio.h>
#include<stdlib.h>


int main(){
	
	printf("\n****************************************************");
	printf("\n aluno:GUILHERME SANTIAGO ARAUJO - RA 0022278");
	printf("\n GSA-14: Tipo de Triagulo");
	printf("\n ****************************************************");
	
	float a,b,c, tipo;
	
	printf("\n digite o primeiro lado do triagulo: ");
	scanf("%f" , &a);
	
	printf("digite o segundo lado do tringulo: ");
	scanf("%f", &b);
	
	printf("digite o terceiro lado do triangulo: ");
	scanf("%f", &c);
	
	if(a==b && b==c)
	{
		tipo=a, b, c;
		printf("isso seria um triangulo equilatero");

	
	}
	
	else if (a==b|| a==c|| b==c){
		
		printf("isso seria um triangulo isosceles");
			
	}
	
	else{
		
		printf("isso seria um triangulo escaleno");
	}
	
	
      
	
	
	
	
	
	
	
	
	
	
	return 0;
}
