
#include <stdio.h>


int main() {
    int num;

    printf("Digite um n�mero inteiro: ");
    scanf("%d", &num);

    printf("Antecessor: %d\n", num - 1);
    printf("N�mero digitado: %d\n", num);
    printf("Sucessor: %d\n", num + 1);

    return 0;
}

