#include <stdio.h>

int main()
{
	char estoque_minimo=10; 
	char estoque_atual=6;
	
	if ((estoque_minimo> 0) && ((estoque_minimo > estoque_atual) || (estoque_atual==0 )))
	{
	printf("  PEDIR MAIS PRODUTOS");
    }
	else
	{
		printf(" NAO PEDIR MAIS PRODUTOS");
	}
	
}
