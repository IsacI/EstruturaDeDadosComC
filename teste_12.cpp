#include <stdio.h>
#include <stdlib.h>

int main(){
	int num;
	int quad;
	
	printf("Digite um numero \n");
	scanf("%d", &num);
	while(num != 0)
	{
		quad = num*num;
		printf("O quadrado de %d = %d\n",num,quad);
		scanf("%d", &num);
		while (num != 0);
		
		
	
	}
	system("pause");
	return 0;
}
