#include <stdio.h>

struct Pessoa {
    char nome[50];
    int idade;
};

int main() {
    struct Pessoa p1;
    strcpy(p1.nome, "João");
    p1.idade = 30;

    printf("Nome: %s, Idade: %d\n", p1.nome, p1.idade);

    return 0;
}
