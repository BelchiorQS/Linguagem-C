# Linguagem-C
Aprendendo a programar em C do basico ao avançado

# Módulo 1: Introdução à Programação em C

## 1. Introdução à linguagem C
A linguagem C é uma linguagem de programação de propósito geral que oferece controle de baixo nível e eficiência de máquina. Foi desenvolvida na década de 1970, mas ainda é muito usada até hoje, especialmente em aplicações de sistemas e hardware.

## 2. Configurando o ambiente de desenvolvimento
Para começar a programar em C, você precisa de um compilador C. O GCC (GNU Compiler Collection) é um compilador muito popular que suporta várias linguagens, incluindo C. Você pode instalá-lo em seu sistema operacional preferido. Além disso, um editor de texto ou um IDE (Ambiente de Desenvolvimento Integrado) pode ser útil para escrever seu código.

## 3. Estrutura básica de um programa em C
Um programa em C geralmente consiste em funções, sendo a função `main()` a entrada do programa. Aqui está um exemplo de um programa C muito simples:

```c
#include <stdio.h>

int main() {
    printf("Olá, mundo!\n");
    return 0;
}
```

Claro, vamos continuar com o segundo módulo do nosso curso de programação em C.

```markdown
# Módulo 2: Fundamentos da Linguagem C

## 1. Variáveis e tipos de dados
Em C, cada variável tem um tipo de dado específico. Os tipos de dados básicos incluem `int` (para números inteiros), `float` (para números de ponto flutuante), `char` (para caracteres) e `double` (para números de ponto flutuante de precisão dupla).

```c
int idade = 20;
float altura = 1.75;
char inicial = 'A';
```

## 2. Operadores
C suporta uma variedade de operadores, incluindo operadores aritméticos (`+`, `-`, `*`, `/`, `%`), operadores de comparação (`==`, `!=`, `<`, `>`, `<=`, `>=`) e operadores lógicos (`&&`, `||`, `!`).

## 3. Controle de fluxo (if, else, switch)
O controle de fluxo permite que seu programa tome decisões. A instrução `if` executa um bloco de código se uma condição for verdadeira. A instrução `else` é usada em conjunto com `if` para executar um bloco de código se a condição for falsa. A instrução `switch` permite que um bloco de código seja executado de várias maneiras diferentes.

```c
int numero = 10;
if (numero > 5) {
    printf("O número é maior que 5.\n");
} else {
    printf("O número é menor ou igual a 5.\n");
}
```

## 4. Loops (for, while, do-while)
Os loops permitem que você execute um bloco de código várias vezes. O loop `for` é útil quando você sabe quantas vezes o loop deve ser executado. O loop `while` continua enquanto uma condição for verdadeira. O loop `do-while` é semelhante ao `while`, mas a condição é testada no final do loop.

```c
for (int i = 0; i < 10; i++) {
    printf("%d\n", i);
}
```

No próximo módulo, exploraremos funções e ponteiros em C. Fique ligado! 😊

Claro, vamos continuar com o terceiro módulo do nosso curso de programação em C.

```markdown
# Módulo 3: Funções e Ponteiros

## 1. Introdução às funções
As funções são blocos de código que realizam uma tarefa específica. Elas podem receber argumentos e retornar um valor. A função `main()` é a função principal de qualquer programa C.

```c
int soma(int a, int b) {
    return a + b;
}
```

## 2. Passagem por valor e por referência
Na passagem por valor, uma cópia do valor é passada para a função. Na passagem por referência, um ponteiro para o valor é passado, permitindo que a função modifique o valor original.

## 3. Recursividade
A recursividade ocorre quando uma função chama a si mesma. É útil para resolver problemas que podem ser divididos em subproblemas menores do mesmo tipo.

```c
int fatorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}
```

## 4. Introdução aos ponteiros
Os ponteiros são variáveis que armazenam o endereço de outra variável. Eles são úteis para passagem por referência e para trabalhar com arrays e strings.

```c
int x = 10;
int* p = &x;
```
```

No próximo módulo, exploraremos estruturas de dados em C. Fique ligado! 😊
