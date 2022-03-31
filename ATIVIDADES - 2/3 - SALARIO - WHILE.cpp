#include <stdio.h>

int main()
{
	float sl, sb1, tx1, imp1, sb2, tx2, imp2, sb3, tx3, imp3, sb4, tx4, imp4, sb5, tx5, imp5;
	int cont;
	cont=1;
	
	while(cont<=15){
		
		printf(" \n DIGITE O SALARIO %i\n", cont);
		scanf(" %f", &sl);
		
		if(sl<=999){
			
			imp1=0.1;
			sb1=sl+(sl*imp1);
			tx1=sb1-sl;
			
			printf(" SALARIO BRUTO= %f\n SALARIO LIQUIDO %f\n IMPOSTO PAGO= %f\n IMPOSTO= %f\n", sb1, sl, tx1, imp1);
		}
			
		if(sl>999&&sl<=1999){
			
			imp2=0.15;
			sb2=sl+(sl*imp2);
			tx2=sb2-sl;
			
			printf(" SALARIO BRUTO= %f\n SALARIO LIQUIDO %f\n IMPOSTO PAGO= %f\n IMPOSTO= %f\n", sb2, sl, tx2, imp2);
		}
			
		if(sl>1999&&sl<=9999){
		
			imp3=0.2;
			sb3=sl+(sl*imp3);
			tx3=sb3-sl;
			printf(" SALARIO BRUTO= %f\n SALARIO LIQUIDO %f\n IMPOSTO PAGO= %f\n IMPOSTO= %f\n", sb3, sl, tx3, imp3);
		}
			if(sl>9999&&sl<=99999){
			
			imp4=0.25;
			sb4=sl+(sl*imp4);
			tx4=sb4-sl;
			
			printf(" SALARIO BRUTO= %f\n SALARIO LIQUIDO %f\n IMPOSTO PAGO= %f\n IMPOSTO= %f\n", sb4, sl, tx4, imp4);
		}
		
		if(sl>99999){
			
			imp5=0.3;
			sb5=sl+(sl*imp5);
			tx5=sb5-sl;
			printf(" SALARIO BRUTO= %f\n SALARIO LIQUIDO %f\n IMPOSTO PAGO= %f\n IMPOSTO= %f\n", sb5, sl, tx5, imp5);
		}	
	cont++;	
	}
}




