#include <stdio.h>

int main()

{
	int a=3, b=2, c=2;
	
	c++;
	
	c += !a >= b && c != b;
	
	printf(" c= %d ", c);
}
