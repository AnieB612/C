#include <stdio.h>

int main()
{
	printf(" CALCULAR A SOMA DOS NUMEROS DE 1 A 5\n ");
	
	int cont, soma;
	soma=0;
	cont=1;
	
	
	while(cont<=5){
		
	soma=soma+cont;
	cont++;
		
	}
	
	printf(" SOMA 1-5 = %i", soma);
}
