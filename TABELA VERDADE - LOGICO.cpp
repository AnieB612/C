#include <stdio.h>

main()
{
	// case 1 : (1,1,0) ; case 2: ( 0,1,1) ; case 3: ( 0,1,0)
	int A=0;
	int B=1;
	int C=0;
	int x;
	
	
	x=(A && B) && ((C || A || B) || (!A && C));
	
	
	
	printf (" x= %d\n ", x);


}
