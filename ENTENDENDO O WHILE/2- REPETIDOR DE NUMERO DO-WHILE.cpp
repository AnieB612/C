#include <stdio.h>

int main()
{
	int num, cont;
	
	printf(" digite um numero\n");
	
	do{
		scanf(" %i", &num);
		   if(num!=0){
		   	
		   	printf("\n NUMERO = %i\n", num);
		    cont++;
		   }
	}
	while(num!=0);{
		return 0;
	}
	
}
