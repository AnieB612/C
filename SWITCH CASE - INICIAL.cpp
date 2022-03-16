#include <stdio.h>

int main()
{
	
	int op;
	
	printf(" Digite 1 para add ou 2 para excluir \n");
	scanf(" %i", &op);
	
	switch(op)
	{
		case 1:{
			printf("\n Numero 1\n");
			break;
		
		}
		case 2:{
			printf("\n Numero 2 \n");
			break;
		}
		
		default: printf(" \nFinal do Programa ");
	}
}
