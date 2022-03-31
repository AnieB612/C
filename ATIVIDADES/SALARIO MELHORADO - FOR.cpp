#include <stdio.h>

int main()
{
	printf("desenvolva um programa que leia o salário de 10 funcionários de uma empresa, calcule e mostre o maior salário e a média salarial da empresa.\n");
	
	float media, maior, cont, sal, soma;
	
	maior=0;
	soma=0;
	
	
	for(cont=1;cont<=3;cont=cont+1)
	{
		printf(" \nDigite o salario Numero: %.0f\n ", cont);
		
		
		
		
		
		scanf(" %f", &sal);
		
		if(sal>maior)
		{
			maior=sal;
		}
		
		soma=soma+sal;
		media=(soma/3);
	}
	
	
	printf(" \nvalor do maior salario e:\n %.1f ", maior);
	
	printf(" \nvalor da media e:\n %.2f ", media);
	
	
	
	
}
