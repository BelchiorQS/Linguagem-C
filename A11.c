#include <stdio.h>

int main(void) {
    unsigned int a = 60;    // 60 = 0011 1100  
    unsigned int b = 13;    // 13 = 0000 1101
    int c = 0;           

    c = a & b;             // 12 = 0000 1100
    printf("Linha 1 - Valor de c é %d\n", c );

    c = a | b;             // 61 = 0011 1101
    printf("Linha 2 - Valor de c é %d\n", c );

    c = a ^ b;             // 49 = 0011 0001
    printf("Linha 3 - Valor de c é %d\n", c );

    c = ~a;                // -61 = 1100 0011
    printf("Linha 4 - Valor de c é %d\n", c );

    c = a << 2;            // 240 = 1111 0000
    printf("Linha 5 - Valor de c é %d\n", c );

    c = a >> 2;            // 15 = 0000 1111
    printf("Linha 6 - Valor de c é %d\n", c );

    return (0);
}
