
#include <stdio.h>

int main() {
    float num1, num2, num3;
    float maior, menor, media;

    printf("Digite três números: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    maior = (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);
    menor = (num1 < num2) ? (num1 < num3 ? num1 : num3) : (num2 < num3 ? num2 : num3);
    media = (num1 + num2 + num3) / 3;

    printf("Maior número: %.2f\n", maior);
    printf("Menor número: %.2f\n", menor);
    printf("Média dos números: %.2f\n", media);

    return 0;
}
/*Para cada numero digitado dar um espaço senão não consegue executar o codigo*/

