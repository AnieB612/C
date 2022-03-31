#include <stdio.h>

int main()
{
		printf(" leia cinco números inteiros e positivos e mostre o maior deles.\n");
		
		int num,cont,maior;
		cont=1;
		maior=0;
		
		printf(" \n DIGITE OS NUMROS\n");
		
		while(cont<=5){
			
			scanf("%i", &num);
			
			if(num>maior){
			maior=num;	
			}
			cont++;
		
		}
		
		printf(" o maior numero e %i", maior);
}
