#include <stdio.h>

int main()
{
	
	char sexo;
	
	printf( " Qual o seu sexo\n ");
	scanf(" %c", &sexo);
	
	if(sexo =='f'|| sexo =='F')
	{
		printf("\n Voce e do sexo feminino\n");
	}
	
	else
	{
		if(sexo =='m'|| sexo == 'M'){
		
		printf(" voce e Do sexo masculino ");
	}
		else
		{
			printf(" vc digitou uma letra diferente ");
		}
	}
}
