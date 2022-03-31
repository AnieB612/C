#include <stdio.h>

int main()
{
	int num;
	
        printf(" DIGITE O NUEMRO \n");
		
		scanf(" %i", &num);

	while(num!=0&&num!=9){
				
		if(num%2==0){
			printf(" \n NUMERO PAR \n");
		}
		else{
			printf(" \n NUMERO IMPAR \n");
		}
		
		printf(" \n DIGITE O NUMERO \n");
		scanf(" %i", &num);
	}	
	printf(" fim da execucao ");
}
