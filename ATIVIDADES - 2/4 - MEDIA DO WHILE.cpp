#include <stdio.h>

int main()
{
	printf(" Ler uma sequencia de numeros terminada em 0 e mostrar sua media. essa sequencia tera pelo menos um numero valido\n\n");
	
	int num, cont;
	float media,soma;
	cont=0;
	soma=0;
	
	printf(" \nDIGITE OS NUMEROS DA SEQUENCIA\n\n");
	
	scanf(" %i", &num);
	
	if(num==0){
			printf(" ERro");
			return 0;
		}
		
	else{
	
	do{
			
			soma=soma+num;
			cont++;
			scanf(" %i", &num);
	
	}
    
    
	while(num!=0);{
	
	media=soma/cont;
	printf(" \nMEDIA = %f", media);
	
	}

  }
}
