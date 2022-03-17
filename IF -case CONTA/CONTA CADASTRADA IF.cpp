#include <stdio.h>

int main()
{
	char op;
	int cadastro, ativo, logado;
	cadastro=ativo=logado=0;
	
	printf(" Deseja cadastrar sua conta s/n ? \n");
	scanf("%c%*c", &op);
	
	if(op == 's'){
		
		cadastro=1;
		printf(" \nConta Cadastrada\n ");	
	}
	
	printf(" \nDeseja ativar sua conta? s/n \n");
	scanf("%c%*c", &op);
	
	if(op == 's'){
		
		ativo=1;
		printf(" \nConta Ativada\n");
		
	}
	
	printf(" \n Deseja ficar logado? s/n \n ");
	scanf("%c%*c", &op);
	
	if(op == 's'){
		logado=1;
		printf( " \n Conta Logada \n");
	}
	
	if ((cadastro==1)&&(ativo==1)&&(logado==1)){
		printf(" \n Seja bem vindo \n ");
		
	}	else {
		
		printf(" \n Algo deu errado \n");
	}
	
}
