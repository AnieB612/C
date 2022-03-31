#include <stdio.h>

int main()
{
	printf(" desenvolver um programa que leia uma sequência de letras (a... z) terminada em ponto (.) e que mostre quantas vezes cada vogal (a, e, i, o, u) apareceu na lista.");
	
	char letra, cont;
	int  soma,some,somi,somo,somu;
	
	soma=some=somi=somo=somu=0;
	
	
	printf( " \ndigite a letra\n ");
	
	while(letra!='.'){
		
	    scanf(" %c", &letra);

		if(letra =='a'){
		soma=soma+1;
			
		} else{
			if(letra =='e'){
		    some=some+1;}
	         }
		
		if(letra =='i'){
		somi=somi+1;}
		
		  else{
	       if(letra =='o'){
		   somo=somo+1;
		    }}
		
		if(letra =='u'){	
		somu=somu+1;	
		}
		   else{
		   if( letra == '.'){
	       printf(" a quantidade de:\n a=%i\n  e= %i\n  i=%i\n  o=%i\n  u=%i\n", soma, some, somi, somo, somu);}
	          }
	          
	letra++;	
	
	}
	
}
