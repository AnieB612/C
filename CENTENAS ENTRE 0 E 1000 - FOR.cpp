#include <stdio.h>

int main()
{
	int cont;
	
	printf(" mostrar todas as centenas entre 0 e 1000\n");
	
	for(cont=100;cont<=1000;cont=cont+100)
	{
		printf(" %i\n", cont);
	}
}
