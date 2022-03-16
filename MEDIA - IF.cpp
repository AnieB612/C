#include <stdio.h>

int main()
{
	float a, b, med;
	
	printf(" Digite nota 1\n");
	scanf("%f", &a);
	
	printf(" Digite Nota 2\n");
	scanf("%f", &b);
	
	med=((a+b)/2);
	
	if(med>=7){
		
		printf(" \nAluno aprovado\n MEDIA=%.2f ", med);
		
		}
		else{
			
			printf("\naluno reprovado\nMEDIA=%.2f", med);
		}
	
	
}
