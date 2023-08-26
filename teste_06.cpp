#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int EPOCA;
	printf("Digite o trimestre do ano em que estamos: ");
	scanf("%d", &EPOCA);
	switch(EPOCA)
{

case 1 : printf("verao");
break;
case 2 : printf("outono");
break;
case 3 : printf("inverno");
break;
case 4 : printf("primavera");
break;
default: printf("período inválido");
}
return 0;
}
