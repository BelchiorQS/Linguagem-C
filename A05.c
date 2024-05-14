#include <stdio.h>

int main() {
    int a = 10;
    int *ponteiro_para_a = &a;

    printf("Endereço de a: %p\n", &a);
    printf("Valor de ponteiro_para_a: %p\n", ponteiro_para_a);
    printf("Valor apontado por ponteiro_para_a: %d\n", *ponteiro_para_a);

    return 0;
}
