#include <stdio.h>

int main()
{
	printf(" desenvolva um programa que leia 3 notas de 40 alunos, calcule e mostre a média aritmética e a situação de aprovação de cada um deles. Lembre-se que apenas a média igual ou acima de 7 aprova o aluno.\n");
	
	float media, nota,soma;
	int conta,cont;
	
	soma=0;
	
	for(conta=1;conta<=40;conta=conta+1)
	{
	printf(" \nALUNO %i ", conta);
	
	for(cont=1;cont<=3;cont=cont+1)
	{
		printf(" \nDigite o valor da Nota: %i\n", cont);
		scanf(" %f", &nota);
		
		soma=soma+nota;
			
	}
	    media=soma/3;
		printf("  \nA media do aluno e = %.1f\n", media);


    if(media>=7)
    {
    	printf(" \naprovado\n ");
    	
	}
	else
	{
		printf(" \nreprovado\n ");
	}
	
	media=soma=0;
	
  }
    
}
