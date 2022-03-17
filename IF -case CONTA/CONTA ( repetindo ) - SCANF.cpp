#include <stdio.h>

int main()
{
	
	int cadastrada, ativa, logada;
	char qst;
	
	cadastrada, ativa, logada=0; // SETEI A ENTRADA, POR VIA DAS DUVIDADS , MAS DARIA CERTO SEM ZERAR
	
	
	//---------------------------------------------------------------------------
	
	printf(" Deseja Cadastrar uma Conta ? S/N\n");
	scanf( "%c%*c", &qst);
	
	if(qst=='S')
	{
		cadastrada=1;
		printf("\nConta Cadastrada\n");
	}
	else
	{
		cadastrada=0;
	}
	
	//------------------------------------------------------------------------------
	
	printf(" \nDeseja ativar sua conta? S/N\n");
	scanf("%c%*c", &qst);
	
	if(qst=='S')
	{
		ativa=1;
		printf("\n Conta Ativa\n");
	}
	else
	{
		ativa=0;
	}
	//-----------------------------------------------------------------------------
	
	printf("\nDeseja logar sua conta? S/N\n");
	scanf("%c%*c", &qst);
	
	if(qst=='S')
	{
		logada=1;
		printf(" \nConta Logada\n");
	}
	else
	{
		logada=0;
	}
	//------------------------------------------------------------------------------
	
	
	if((cadastrada==1)&&(ativa==1)&&(logada==1))
	{
		printf("\n seja bem vindo ");
	}
	else
	{
		printf(" algo deu errado ");
	}
}
