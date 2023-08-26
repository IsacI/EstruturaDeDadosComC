#include<stdio.h>

int main(){

{
	int i;
	do 
	{
		printf("\n\nEscolha uma fruta:\n\n");
		printf("\t(1)abacaxi:\n");
		printf("\t(2)manga:\n");
		printf("\t(3)laranja:\n");
		scanf("%d", &i);
		
		}while ((i<1) || (i>3));
		
		switch (i)	
	{
	
	case 1:
		printf("\t\t voce escolheu abacaxi. \n");
		break;
	case 2:
		printf("\t\t voce escolheu manga. \n");
		break;
	case 3:
		printf("\t\t voce escolheu laranja. \n");
		break;
}
return (0);

}
}
