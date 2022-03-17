#include <stdio.h>

int main()
{
	float alcool, gasolina, div;
    
    printf(" DIGITE O VALOR DO ALCOOL \n");
    scanf(" %f", &alcool);
    
    printf(" \nDIGITE O VALOR DA GASOLINA\n");
    scanf(" %f", &gasolina);
    
    

    if(gasolina>0){
    	
    	div=(alcool/gasolina);
    	
    	if(div>0.0 && div<=0.7){
    		
    		printf(" Abastecer com alcool ");
		}
		if (div>0.7)
		{
			printf("\nAbastecer com gasolina ");
			
		}	
	}
	
	if ( div == 0.0)
	{
		printf(" Falta combustivel ");
	}
	
}


