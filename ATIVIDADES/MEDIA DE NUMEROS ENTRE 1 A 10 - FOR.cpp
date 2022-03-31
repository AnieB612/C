#include <stdio.h>

int main()
{
	float cont, soma, media;
	
	printf(" valor da media aritmetica dos numeros entre 1 e 10\n");
	
	soma=0;
	
	for(cont=1;cont<=10;cont=cont+1)
	{
		soma=soma+cont;
		
		media=(soma/10);
	}
	
	printf(" %.1f\n", media);
}
