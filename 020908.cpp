#include <stdio.h>
int main()
{
	int num, *p;
	num=55;
	p=&num;
	printf("\n valor inicial:\n", num);
	*p=100;
	printf("\n valor final: %d\n", num);
	printf("endereço de memoria para onde o ponteiro aponta: %p\n",p);
	return(0);
}
