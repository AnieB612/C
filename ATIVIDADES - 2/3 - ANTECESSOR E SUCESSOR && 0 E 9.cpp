#include <stdio.h>

int main()
{
	int num;
	
	
	do{
		printf(" DIGITE UM NUMERO \n ");
		scanf(" %i", &num);
		
		if(num%2==0&&num!=0){
			printf(" \n NUMERO PAR E SUCESSOR = %i\n\n ", num+1);	
		}
		if(num%2!=0&&num!=9){
			printf(" \n NUMERO IMPAR E ANTECESSOR= %i\n\n", num-1);
			
		}
		
	}
		while(num!=0&&num!=9);
	
		
}
