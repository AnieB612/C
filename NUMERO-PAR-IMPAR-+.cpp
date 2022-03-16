#include <stdio.h>

int main()
{
	
	int num;
	
	printf( " Digite um numero:\n ");
	scanf(" %i", &num);
	
	if( num%2 == 0){
		printf(" \nnumero par");
		}
		else
		{
			printf(" \nnumero impar ");
		}
		//__________________________________________________________ ABA DE PAR X IMPAR 
		
	if( num > 0){
		printf(" \nnumero positivo");
		
		}if(num < 0 ){
			printf(" \nnumero negativo");
			
			}if (num == 0)
			{
				printf(" \nnumero nulo");
			}
}
