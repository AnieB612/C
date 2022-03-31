#include <stdio.h>

int main()
{	
	int cont;
	float media, num,soma;
	soma=0;
	cont=-1;
	num=-1;
	
	printf( " \n\ndigite a sequencia de numeros:\n ");
	while(num!= 0){
	
	scanf(" %f", &num);
	
	printf(" \nnum=%f\n", num);	
		
		soma=soma+num;
		
		cont++;
	
   }
			printf("\n soma = %f", soma);
			printf("\n cont = %d", cont);
			
			media=(soma/cont);
			
			printf("\n Media = %f", media);
}
