#include <stdio.h>

int main()
{
	printf(" Digite uma sequencia de numeros inteiros que termine em 0 e mostre cada numero lido execeto o zero\n ");
	
	int num;
	
	printf(" \n digite os nuemros \n");
	
	do{
		scanf(" %i", &num);
		if(num!=0){
		
		printf(" \n NUMERO DIGITADO: %i\n", num);
	}
		
	
	}
	while(num!=0);
	
	return 0;
}





