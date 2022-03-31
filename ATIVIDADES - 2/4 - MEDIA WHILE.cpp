#include <stdio.h>

int main()
{
	printf(" Ler uma sequencia de numeros terminada em 0 e mostrar sua media. essa sequencia tera pelo menos um numero valido\n\n");
	
	int num, cont;
	float media, soma;
	cont=0;
	soma=0;
	
	printf(" \n DIGITE A SEQUENCIA DE NUMEROS \n\n");
    scanf(" %i", &num);
    
	if(num!=0){
		
	
	while(num!=0){
	   
	    soma=soma+num;
	    cont++;
		scanf(" %i", &num);
		
	}
	media=soma/cont;
	
	printf(" MEDIA = %f", media);
    }
    else
    printf(" ERROR");
}

