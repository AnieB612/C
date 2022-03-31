#include <stdio.h>

int main()
{
	printf(" leia cinco números inteiros e positivos e mostre o maior deles.\n");
	
	int num, cont, maior;
	
	printf("\n DIGITE OS NUMEROS\n");
	
	for(cont=1;cont<=5;cont++){
		
		scanf(" %i", &num);
		
		if(num>maior){
			maior=num;
		}		
}

	printf(" \n MAIOR N= %i", maior);
}

