#include <stdio.h>

int main()
{
	float c,media,soma;
	
	for(c=1;c<=10;c=c+1)
	{
		soma=soma+c;
	}
	
	media=soma/10;
	
	printf(" valor da media = %f", media);
}
