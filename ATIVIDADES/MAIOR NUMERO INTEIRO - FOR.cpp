#include <stdio.h>

int main()
{
	printf("desenvolva um programa que leia 15 números inteiros e positivos e mostre o maior deles.\n");
	int num, cont, maior;
		
	maior=0;
	
	printf(" \ndigite 15 numero inteiros\n");
	
	for(cont=1;cont<=5;cont=cont+1)
	{
		scanf("%i", &num);
	    
	        if(num>maior)
	        {
		      maior=num;
	        }
	
    }
		printf(" O MAIOR NUMERO E:\n %i", maior);
}
