#include <stdio.h>

int main()

{
	float alt, peso, imc;
	
	printf(" Escreva sua altura e seu peso:\n");
	
	scanf("%f %f", &alt, &peso);
	
	imc=(peso/alt)/alt;
	
	printf("Seu peso �:%f\n  Sua Altura �:%f\n Seu IMC �:%f\n",peso, alt, imc);
	
}
