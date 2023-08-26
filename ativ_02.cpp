#include <stdio.h>
#include <string.h>

int main() {
    char nome[80];/*Posso deixar a quantidade de caracteres que quiser nessa variavel*/
    int count = 0;

    printf("Digite um nome: ");
    scanf("%s", nome);

    for (int i = 0; i < strlen(nome); i++) {
        if (nome[i] == 'A' || nome[i] == 'a') {
            count++;
        }
    }

    printf("O nome '%s' tem %d letra(s) 'A'.\n", nome, count);

    return 0;
}

