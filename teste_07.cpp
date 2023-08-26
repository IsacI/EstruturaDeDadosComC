#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int EPOCA;
	printf("Digite o semestre que está cursando: ");
	scanf("%d", &EPOCA);
	switch(EPOCA)
{

case 1 : printf("1° semestre");
break;
case 2 : printf("2° semestre");
break;
case 3 : printf("3° Semestre");
break;
case 4 : printf("4° semestre");
break;
case 5 : printf("5° semestre");
break;
case 6 : printf("6° semestre");
break;
default: printf("acabou");
}
return 0;
}
