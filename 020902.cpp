#include <stdio.h>
#include <stdlib.h>

int square (int x)
{
	printf("o quadrado e %d", (x*x));
	return(0);
}

int main()
{
	int num;
	printf("Entre com um numero: ");
scanf("%d", &num);
	printf("\n\n");
	square(num);
	system("Pause");
	return(0);

}
