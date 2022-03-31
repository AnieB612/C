#include <stdio.h>

int main()
{	
    printf(" LER UMA SEQUENCIA DE NUMEROS TERMINADA EM ZERO E MOSTRAR SUA MEDIA\n\n");
    
    int num;
    float media, soma, cont;
    soma=0;
    num=-1;
    cont=-1;

    
    printf(" \nDigite a sequencia de numeros\n ");
    
    while(num!=0){
    	
    	scanf(" %i", &num);
    	
    	soma=soma+num;
    	printf(" soma = %f", soma);
    	cont++;
    	printf(" \ncont %f\n", cont);
    	
	}
	
    media=(soma/cont);
    printf(" \nMEDIA =%f", media);
    
    
}
