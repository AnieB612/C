#include <stdio.h>

int main()
{
	printf(" desenvolva um programa que leia 15 números inteiros e positivos e mostre o maior deles.\n\n");
	
	int num, cont, maior;
	
	
	maior=0;
	cont=1;
	
	while(cont<=15){
		
		printf("\n Digite o %i inteiro\n", cont);
		scanf(" %i", &num);
		if(num>maior){
			
			maior=num;
		}
	
	cont++;		
	}
	printf(" maior dos numeros = %i", maior);
	
}
