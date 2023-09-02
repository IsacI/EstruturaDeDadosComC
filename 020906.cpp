#include <stdio.h>
#include <stdlib.h>

#define DIM 3

int main() {
    int matriz[DIM][DIM];
    int linha, coluna;

    // Input loop
    for (linha = 0; linha < DIM; linha++) {
        for (coluna = 0; coluna < DIM; coluna++) {
            printf("Elemento[%d][%d]: ", linha + 1, coluna + 1);
            scanf("%d", &matriz[linha][coluna]);
        }
    }

    // Output loop
    for (linha = 0; linha < DIM; linha++) {
        for (coluna = 0; coluna < DIM; coluna++) {
            printf("%5d", matriz[linha][coluna]);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}

