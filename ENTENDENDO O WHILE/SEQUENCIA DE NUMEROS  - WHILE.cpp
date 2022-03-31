#include <stdio.h>

int main()
{
	printf(" ler uma lista de numeros encerrada por um numero negativo e mostrar a soma\n ");
	
	int num, soma, cont;
	
	cont=0;
	soma=0;
	
	printf("\n DIGITE O NUMERO \n");
	scanf(" %i", &num);
	
	while(num>0){
		
		soma=soma+num;
		cont++;
		scanf(" %i", &num);
	
	}
	if(soma>0){
	
	printf(" SOMA = %i", soma);
}
    else{
    	
    	printf(" ERRO ");
	}
}
