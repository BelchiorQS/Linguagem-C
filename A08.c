#include <stdio.h>
#include <stdlib.h>

int main() {
    int *numeros = malloc(5 * sizeof(int));
    if (numeros == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        numeros[i] = i;
    }

    for (int i = 0; i < 5; i++) {
        printf("%d\n", numeros[i]);
    }

    free(numeros);

    return 0;
}
