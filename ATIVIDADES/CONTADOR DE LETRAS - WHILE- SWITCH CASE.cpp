#include <stdio.h>

int main()
{
	char letra;
	int soma, some, somi,somo,somu;
	soma=some=somi=somo=somu=0;
	
	printf(" digite as vogais\n");
	
	while(letra!='.'){
	
	
	scanf("%c", &letra);
	
	switch(letra){
		
		case 'a':{
			soma=soma+1;
			break;
		}
		case 'e':{
			some=some+1;
			break;
		}
		case 'i':{
			somi=somi+1;
			break;
		}
		case 'o':{
			somo=somo+1;
			break;
		}
		case 'u':{
			somu=somu+1;
			break;
		}
		case '.':{
			printf(" a=%i\n e=%i\n i=%i\n o=%i\n u=%i\n", soma, some, somi, somo, somu);
			break;
		}
	}
}
}

