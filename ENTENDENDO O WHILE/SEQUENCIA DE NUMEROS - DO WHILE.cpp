#include <stdio.h>

int main()
{
	printf(" ler uma lista de numeros encerrada por um numero negativo e mostrar a soma\n ");
	
	int num, soma, cont;
	
	soma=0;
	
	
	
	do{
		
		printf(" \nDIGITE UM NUMERO\n ");
		scanf(" %i", &num);
		if(num>0){
			
		soma=soma+num;
		cont++;
	}	
		
	}
	
	while(num>0);
	{
		printf(" \nSOMA = %i", soma);
	}
}
