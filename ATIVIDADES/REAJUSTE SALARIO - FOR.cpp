#include <stdio.h>
int main()
{
	printf(" desenvolva um programa que leia, inicialmente,a porcentagem de reajuste dos salários dos funcionários de uma empresa. Na sequência, deve ler o salário de cada um dos 50 funcionários, calcular e mostrar o novo salário reajustado, aplicando a porcentagem de ajuste sobre os respectivos salários atuais. Ao final, o maior salário reajustado da empresa deve ser apresentado na tela.\n");
	
	float sal, reajuste, nsal, maior;
	int cont, conta;
	
	maior=0;
	
	printf(" \nqual o reajuste de salario?\n ");
	scanf(" %f", &reajuste);
	reajuste=(reajuste/100);
	
	for(conta=1;conta<=5;conta++)
	{
      	printf(" \n\nqual o valor do salario %i?\n ", conta);
	    scanf(" %f", &sal);

		nsal=sal+(sal*reajuste);  	
	         	
	    printf("\nvalor do novo salario %i :\n %.2f \n", conta, nsal);
	         
	    if(nsal>maior)
		    {
			maior=nsal;
		    }
		    
		    sal=nsal=0;
		    
   }
   
   
    printf(" \nvalor do maior salario e:\n %.2f", maior);
}
