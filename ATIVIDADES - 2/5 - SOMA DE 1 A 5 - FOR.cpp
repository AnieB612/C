#include <stdio.h>

int main()
{
	
	printf(" calcular a soma dos numeros de 1 a 5\n\n");
	
	int cont, soma;
	soma=0;
	
	for(cont=1;cont<=5;cont++){
		
		soma=soma+cont;
		
	}
	
	printf(" \na soma dos numeros de 1 a 5 = %i\n", soma);
}
