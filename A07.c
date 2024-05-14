#include <stdio.h>

int main() {
    FILE *fp = fopen("arquivo.txt", "w");
    if (fp == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    fprintf(fp, "Olá, Mundo!\n");
    fclose(fp);

    return 0;
}
