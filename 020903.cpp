#include <stdio.h>
#include <stdlib.h>

int prod (int x, int y)
{
	return(x*y);
}
int main()
{
	int saida;
	saida = prod (12,7);
	printf("A saida e: %d \n", saida);
	system("Pause");
	return(0);
}
