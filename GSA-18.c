#include<stdio.h>
#include<stdlib.h>


int main(){
	
	printf("\n****************************************************");
	printf("\n aluno:GUILHERME SANTIAGO ARAUJO - RA 0022278");
	printf("\n GSA-18: login simples");
	printf("\n ****************************************************");
	
	int verificUsuario=1234567;
	int verificSenha=7654321;
	
	int usuario,senha;
	
	printf("\n digite seu login(cpf): ");
	scanf("%d", &usuario);
	printf("\n digite sua senha numerica:");
	scanf("%d", &senha);
	

		
 if(usuario == verificUsuario && senha == verificSenha) {
	
	printf("\n acesso liberado");
}

else {
	printf("\nAcesso negado \n usuario ou senha incorretos");
}
	
	
	
	
	
	
	return 0;
}

