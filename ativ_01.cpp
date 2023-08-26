
#include <stdio.h>


int main() {
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    printf("Antecessor: %d\n", num - 1);
    printf("Número digitado: %d\n", num);
    printf("Sucessor: %d\n", num + 1);

    return 0;
}

