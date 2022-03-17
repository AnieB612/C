#include <stdio.h>

int main()
{
	
	// ESSA QUESTAO TEM UM ERRO MAIS QUE CLASSICO 
	// NAO SE PODE POR O VALOR DA DIVISAO 0
	
	
	
	float alcool, gasolina, div;
    
    printf(" DIGITE O VALOR DO ALCOOL \n");
    scanf(" %f", &alcool);
    
    printf(" \nDIGITE O VALOR DA GASOLINA\n");
    scanf(" %f", &gasolina);
    
    div=(alcool/gasolina);
        
        if(div == 0.0 )     
		{     
	    printf(" falta algum comustivel  - ERRO");	
	    }
	    
        if (div>0.0 && div<0.7){
    	printf(" Abastecer com alcool ");
		}
		
		 if (div >= 0.7  )
		{
			printf("\nAbastecer com gasolina ");		
		}       	
		      
}


