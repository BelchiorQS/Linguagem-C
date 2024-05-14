#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}

int fatorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

int main() {
    int resultado = soma(5, 3);
    printf("Soma: %d\n", resultado);

    int f = fatorial(5);
    printf("Fatorial: %d\n", f);
    return 0;
}
