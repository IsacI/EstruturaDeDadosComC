
#include <stdio.h>

int main() {
    float num1, num2, num3;
    float maior, menor, media;

    printf("Digite tr�s n�meros: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    maior = (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);
    menor = (num1 < num2) ? (num1 < num3 ? num1 : num3) : (num2 < num3 ? num2 : num3);
    media = (num1 + num2 + num3) / 3;

    printf("Maior n�mero: %.2f\n", maior);
    printf("Menor n�mero: %.2f\n", menor);
    printf("M�dia dos n�meros: %.2f\n", media);

    return 0;
}
/*Para cada numero digitado dar um espa�o sen�o n�o consegue executar o codigo*/

