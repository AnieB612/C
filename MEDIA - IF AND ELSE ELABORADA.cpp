#include <stdio.h>

int main()
{
	
	float n1, n2, med;
	
	
	printf(" Digite a Nota 1 e a Nota 2:\n");
	scanf(" %f %f", &n1, &n2);
	
	med=((n1+n2)/2);
	
	if (med>7 && med <= 10)
	{
		printf(" aluno aprovado ");
		}
		
	if (med >= 5 && med <= 7)
		{
			printf( " aluno em recuperação");}
			
	if( med >= 0.1 && med < 5)
			{
				printf(" aluno reprovado");
			}
	
	if (med <= 0 )
	{
		printf (" error ");
	}
}
