#include <stdio.h>

int main()
{
	int soma, cont;
	soma=0;
	cont=1;
	
	do{	
		
		soma=soma+cont;
		cont++;
		
	}
	while(cont<=5);
	
     printf(" somatorio = %i", soma);
 
}

