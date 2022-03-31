#include <stdio.h>

int main()
{
	printf(" leia cinco números inteiros e positivos e mostre o maior deles.\n");
	
	int num, maior, cont;
	maior=0;
	cont=1;
	
	printf("\n DIGITE OS 5 NUMEROS\n");
	
	do{
		scanf(" %i", &num);
		
		if(num>maior){
		maior=num;	
		}
		cont++;
	

	}
	while(cont<=5);
	
	printf(" O maior numero e= %i", maior);
}
