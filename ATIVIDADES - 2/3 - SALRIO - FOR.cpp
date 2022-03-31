#include <stdio.h>

int main()
{
	float sb1, sb2, sb3, sb4, sb5, imp1, imp2, imp3, imp4, imp5, sl;
	int cases, cont;
	
	for(cont=1;cont<=15;cont++){
		
		
		printf(" \nDIGITE O VALOR DO SALARIO %i\n", cont);
		
		scanf(" %f", &sl);
	
            	if(sl<=999){
				
				imp1=(0.1);	
				sb1=sl+(sl*imp1);
				printf(" SALARIO LIQUIDO = %f\n SALARIO BRUTO= %f\n IMPOSTO= %.2f\n", sl, sb1, imp1);
				}
				
			
			
		
				if(sl>999 && sl<=1999){
				
				imp2=(0.15);
				sb2=sl+(sl*imp2);
				printf(" SALARIO LIQUIDO = %f\n SALARIO BRUTO= %f\n IMPOSTO= %f\n", sl, sb2, imp2);
				}
			
				
				if(sl>1999 && sl<=9999){
				
				imp3=(0.2);
				sb3=sl+(sl*imp3);
				printf(" SALARIO LIQUIDO = %f\n SALARIO BRUTO= %f\n IMPOSTO= %f\n", sl, sb3, imp3);
				}
				
				if(sl>9999 && sl<=99999){
					
				imp4=(0.25);
				sb4=sl+(sl*imp4);
				printf(" SALARIO LIQUIDO = %f\n SALARIO BRUTO= %f\n IMPOSTO= %f\n", sl, sb4, imp4);
				}
				
				if(sl>99999){
				imp5=(0.3);
				sb5=sl+(sl*imp5);
				printf(" SALARIO LIQUIDO = %f\n SALARIO BRUTO= %f\n IMPOSTO= %f\n", sl, sb5, imp5);
				}
			
		
		}	
	printf(" \nFIM SALARIO ");
}
