#include <stdio.h>

int main()
{
	float a,b,c;
	
	printf( " digite o dividendo: \n");
	scanf("%f", &a);
	
	printf( "digite o divisor: \n");
	scanf("%f", &b);
	
	c=a/b;
	
	if(b==0)
	{
		printf(" divisã0 por 0");
		
		}
		else{ printf(" c=%f", c);
	
	}
	
}
