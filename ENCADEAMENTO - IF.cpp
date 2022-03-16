#include <stdio.h>

int main()
{
	
	int numero;
	
	printf(" Digite um numero\n ");
	scanf(" %i", &numero);
	
	if(numero>0)
	{
		printf(" numero positivo");
    }
		
	else
	{
	
	    if(numero == 0)
	    {
	    	printf(" numero nulo ");
		}
		else
		{
			printf(" numero negativo");
		}
	}
}
