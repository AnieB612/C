#include <stdio.h>

int main()
{
	
	printf(" calcular a soma dos numeros de 1 a 5\n\n");
	
	int cont, soma;
	soma=0;
	cont=1;
	
	do{
		soma=soma+cont;
		cont++;
	}
	while(cont<=5);{
	
	printf(" valor da soma = %i", soma);
	
	}
}
