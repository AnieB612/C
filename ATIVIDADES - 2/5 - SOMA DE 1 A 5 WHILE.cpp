#include <stdio.h>

int main()
{
	
	printf(" calcular a soma dos numeros de 1 a 5\n\n");
	
	int soma, cont;
	soma=0;
	cont=1;
	
	while(cont<=5){
		
		soma=soma+cont;
		cont++;
	}
	
	printf(" SOMA= %i", soma);
}


