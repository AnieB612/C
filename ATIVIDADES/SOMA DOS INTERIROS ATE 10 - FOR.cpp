#include <stdio.h>

int main()
{
	int cont, soma;
	
	printf(" mostrar a soma dos numeros inteiros positivos entre 1 e 10\n ");
	
	soma=0;
	
	for(cont=1;cont<=10;cont=cont+1)
	{
		soma=soma+cont;	
	}
	printf(" %i", soma);
	
}
