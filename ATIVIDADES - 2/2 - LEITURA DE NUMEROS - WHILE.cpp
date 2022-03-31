#include <stdio.h>

int main()
{
	printf(" Digite uma sequencia de numeros inteiros que termine em 0 e mostre cada numero lido execeto o zero\n ");
	
	int num;
	
	printf(" \n DIGITE OS NUMEROS \n");
	
	scanf(" %i", &num);
	while(num!=0){
	    
	    if(num!=0){
	    printf(" \nNUMERO DIGITADO = %i\n", num);
		}
		scanf(" %i", &num);
	}
	 printf(" error num = 0");
}
	
