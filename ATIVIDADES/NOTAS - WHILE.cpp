#include <stdio.h>

int main()
{
	printf(" desenvolva um programa que leia 3 notas de 40 alunos, calcule e mostre a média aritmética e a situação de aprovação de cada aluno. Lembre-se que apenas a média igual ou acima de 7 aprova o aluno.\n\n");
	
	float nota, media, soma;
	int cont,conta;
	soma=0;
	
	cont=1;
	
	while(cont<=5){
		
		printf("\n ALUNO %i", cont);
	    for(conta=1;conta<=3;conta++){
		
		 printf("\n Digite a nota %i:\n", conta);
		 scanf(" %f", &nota);
		 soma=soma+nota;
		 media=(soma/3);
       }
      
       
       if (media>=7){
       	printf(" \nAPROVADO - MEDIA = %f\n", media);
	   }
	   else{
	   	printf(" \nREPROVADO - MEDIA = %f\n", media);
	   }
	   nota=media=soma=0;
       cont++;
	 }
	 
}
