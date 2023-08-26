#include <stdio.h>

int main()
{
	char string[100];
	int i, cont;
	printf("\n\n Digite uma frase: ");
	gets(string);
	printf("\n\n Frase digitada: \n%s", string);
	cont = 0;
	for(i=0; string[i] != '\0'; i=i+1)
	{
		if(string[i] == 'c')
		cont = cont + 1;
		
	}
	printf("\n Numero de caraceteres c = %d, cont");
	return (0);
}
