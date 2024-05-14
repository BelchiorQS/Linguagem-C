#include <stdio.h>
#include <string.h>

int main() {
    int numeros[5] = {1, 2, 3, 4, 5};
    printf("Primeiro número: %d\n", numeros[0]);

    char nome[5] = "Casa";
    int tamanho = strlen(nome);
    printf("Tamanho da string: %d\n", tamanho);
    return 0;
}
