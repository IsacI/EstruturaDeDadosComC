#include <stdio.h>
#include <locale.h>

int main()
{
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
}
return 0;
}
