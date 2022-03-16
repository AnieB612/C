#include <stdio.h>

int main()

{
	float alt, peso, imc;
	
	printf(" Escreva sua altura e seu peso:\n");
	
	scanf("%f %f", &alt, &peso);
	
	imc=(peso/alt)/alt;
	
	printf("Seu peso é:%f\n  Sua Altura é:%f\n Seu IMC é:%f\n",peso, alt, imc);
	
}
