#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf(" desenvolva um programa que leia um n�mero N e, em seguida, uma lista de N n�meros inteiros. Este programa tamb�m deve calcular e mostrar a soma dos n�meros pares e dos n�meros �mpares da lista \n\n");
	
	int num,cont, n, soma, soma2;
	
	printf(" Digite a quantidade de numeros da Lista:\n");
	scanf(" %i", &num);
	
	soma=0;
	soma2=0;
	
	for(cont=1; cont<=num; cont++){
	
		printf(" \nDigite o numero: %i \n", cont);
		scanf(" %i", &n);
		
		if(n%2==0){
			
			soma=soma+n;
		}
		
		else{
		   soma2=soma2+n;
		   	
		}
		
		n=0;
		

	}
	printf(" \nA soma dos numeros pares e: %i\n", soma);
	printf(" \nA soma dos numeros impares e: %i\n ", soma2);
	
}
