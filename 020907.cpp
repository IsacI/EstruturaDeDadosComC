#include<stdio.h>

int main()
{
	int  num, valor;
	int * p;
	num = 55;
	p=&num;
	valor =  *p;
	printf("%d\n", valor);
	printf("endereço de memoria para onde o ponteiro aponta: %p\n",p);
printf("O valor de variavel apontada: %d \n", *p);
printf("O valor da variavel num e: %d\n", num);


return(0);
}
