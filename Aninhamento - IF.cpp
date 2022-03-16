#include <stdio.h>

int main()
{
	int numero;
	
	printf(" Digite um numero ");
	scanf(" %i", &numero);
	
	if (numero>=0)
	{
		if(numero == 0)
		{
		printf(" numero nulo");
	    }
		
		else
		{
		printf(" numero positivo");
		}
	}
	else
	{
		printf(" numero negativo ");
	}
}
