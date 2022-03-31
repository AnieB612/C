#include <stdio.h>

int main()
{	
    printf(" LER UMA SEQUENCIA DE NUMEROS TERMINADA EM ZERO E MOSTRAR SUA MEDIA\n");
    
	int num,soma,cont;
	float media;
	soma=0;
	cont=1;
	
	printf( " \n\ndigite a sequencia de numeros:\n ");
	scanf(" %i", &num);
	
	while(num!= 0){
	
	scanf(" %i", &num);
	printf("s = %i", num);
		soma=soma+num;
		printf("soma= %i", soma);
		cont++;
		printf(" cont: %i\n", cont);
		
	
   }
			media=(soma/cont);
			
			printf("\n Media = %f", media);
}
