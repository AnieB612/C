#include <stdio.h>

int main()
{
	float n1,n2,n3,media;
	int cont;
	
	for(cont=1;cont<=40;cont=cont+1)
	{
	printf(" NOTA 1\n");
	scanf(" %f", &n1);
	
	printf(" \nNOTA 2\n");
	scanf(" %f", &n2);
	
	printf(" \nNOTA 3\n");
	scanf(" %f", &n3);
	
	media=((n1+n2+n3)/3);
	
	printf(" \nMedia = %.1f\n", media);
	
	if(media>=7)
	{
		printf(" \naluno aprovado\n\n");
			
	}
	else
	{
		printf(" \nreprovado\n\n ");
	}
	
   }
}
