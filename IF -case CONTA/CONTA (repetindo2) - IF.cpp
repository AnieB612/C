#include <stdio.h>

int main()
{
	int cadastrado, logado;
    char op;
    
    cadastrado=logado=0;

    printf(" Deseja cadastrar sua conta? S/N \n");
    scanf("%c%*c", &op);
    
    if(op =='S')
    {
    	cadastrado=1;
    	printf("\n conta cadastrada\n ");
	}
    
    printf("\nDeseja logar sua conta? S/N\n");
    scanf("%c%*c", &op);
    
    if(op =='S')
    {
    	logado=1;
    	printf("\n conta logada\n ");
	}
    
    if((cadastrado)&&(logado)==1)
    {
    	printf(" seja bem vindo ");
	}
	
	else
	{
		printf(" algo deu errado");
		
	}
    
}





