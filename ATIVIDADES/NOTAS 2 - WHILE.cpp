#include <stdio.h>

int main()
{
	printf(" desenvolva um programa que leia 3 notas de 40 alunos, calcule e mostre a média aritmética e a situação de aprovação de cada aluno. Lembre-se que apenas a média igual ou acima de 7 aprova o aluno.\n\n");
	
	float nota, media, soma, nota2, nota3;
	int cont;
	soma=0;
	
	cont=1;
	
	printf("\n cont = %i\n", cont);
	while(cont<=5){
		
		
		printf("\n ALUNO %i", cont);
		
		
		 printf("\n Digite a nota 1:\n", nota);
		 scanf(" %f", &nota);
		 
		 printf("\n Digite a nota 2:\n", nota2);
		 scanf(" %f", &nota2);
		 
		 printf("\n Digite a nota 3:\n", nota3);
		 scanf(" %f", &nota3);
		
		
		 
		 soma=(nota+nota2+nota3);
		 media=(soma/3);
       
       
       if (media>=7){
       	printf(" \nAPROVADO\n");
	   }
	   else{
	   	printf(" \nREPROVADO\n");
	   }
	   nota=media=soma=0;
       cont++;
	 }
	 
}
