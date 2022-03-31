#include <stdio.h>

int main()
{
	printf(" ler uma sequencia de numeros terminada em zero e mostrar sua media \n");
	
	int num, cont;
	float media, soma;
	
	soma=0;
	cont=0;
	
	printf("\n digite os numeros: \n");
	scanf(" %i", &num);
	
	do{
		soma=soma+num;
		scanf(" %i", &num);
		cont++;
			printf(" \ncontador = %i\n", cont);
	}
	while(num!=0);{
		
		media=(soma/cont);
		printf(" \nvalor da media = %f\n", media);
	
	}
	
	return 0;
}
