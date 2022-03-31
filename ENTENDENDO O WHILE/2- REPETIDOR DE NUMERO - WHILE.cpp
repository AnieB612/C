#include <stdio.h>

int main()
{
	printf(" DIGITAR UM NUMERO DIFERENTE DE 0 E VER SUA SAIDA\n");
	
	int num, cont;
	 
	printf(" \n digite um numero \n");
	scanf(" %i", &num);
	
	while(num!=0){
	
	printf(" \n NUMERO= %i \n", num);
	cont++;
	scanf(" %i", &num);
}
}

