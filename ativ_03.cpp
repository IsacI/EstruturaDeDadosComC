#include <stdio.h>

int main() {
    int num1, num2, num3;
    float media;

    printf("Digite tr�s n�meros inteiros: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    media = (float)(num1 + num2 + num3)/ 3;

    printf("A m�dia dos n�meros �: %.2f\n", media);

    return 0;
}

