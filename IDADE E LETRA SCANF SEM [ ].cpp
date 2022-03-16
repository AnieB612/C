#include <stdio.h>

int main()

{
	int idade;
	char nome;
	
	printf(" Digite sua idade e Digite a primeira letra do seu nome:\n");

	scanf("%d %c", & idade, &nome );
	
	printf("Sua idade e: %d e Sua  letra e: %c", idade, nome);
}
