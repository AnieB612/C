#include <stdio.h>

int main()
{
	printf(" Ler uma sequencia de numeros com terminacao 0 e ler sua media ao final do programa \n");
	
	int num,numm,cont;
	float media, soma;
	
	cont=0;
	soma=0;

	
	printf("\nDigite o numero\n ");
	scanf(" %i", &num);
	
	while(num != 0){
		
		soma=soma+num;
		printf("\n SOMA= %f\n", soma);
		cont++;
		scanf(" %i", &num);
		printf(" contador = %i\n", cont);
	}
	
	media= (soma)/cont;
	printf("\n MEDIA= %f", media);
}
