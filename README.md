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

No próximo módulo, exploraremos estruturas de dados em C. Fique ligado! 😊

# Módulo 5: Programação Avançada em C

## 1. Alocação dinâmica de memória
A alocação dinâmica de memória permite que você reserve memória durante a execução do programa. As funções `malloc()`, `calloc()`, `realloc()` e `free()` são usadas para alocação dinâmica de memória.

```c
int* numeros = malloc(5 * sizeof(int));
```

## 2. Manipulação de arquivos
Em C, você pode ler e escrever em arquivos usando as funções `fopen()`, `fclose()`, `fread()`, `fwrite()`, `fprintf()` e `fscanf()`.

```c
FILE* arquivo = fopen("arquivo.txt", "r");
```

## 3. Bibliotecas em C
As bibliotecas em C são conjuntos de funções e macros pré-compiladas que podem ser reutilizadas. A biblioteca padrão de C inclui funções para matemática, manipulação de strings, manipulação de arquivos, etc.

```c
#include <math.h>
double raiz = sqrt(16.0);
```

No próximo módulo, implementaremos um projeto abrangente que utiliza todos os conceitos aprendidos no curso. Fique ligado! 😊

# Projeto Final

O projeto final é uma oportunidade para aplicar todos os conceitos que você aprendeu ao longo deste curso. O objetivo é construir um programa completo e funcional em C.

## Descrição do Projeto: Sistema de Gerenciamento de Biblioteca

Você irá desenvolver um sistema de gerenciamento de biblioteca. O sistema deve ser capaz de:

1. Adicionar um novo livro à biblioteca.
2. Remover um livro da biblioteca.
3. Pesquisar um livro por título ou autor.
4. Mostrar todos os livros disponíveis na biblioteca.

Cada livro deve ter as seguintes informações:

- Título
- Autor
- Ano de publicação
- Número de páginas

## Requisitos

1. Use estruturas (structs) para representar um livro.
2. Use arrays ou alocação dinâmica de memória para armazenar os livros.
3. Use funções para cada operação (adicionar, remover, pesquisar, mostrar).
4. O programa deve ser interativo e o usuário deve ser capaz de realizar as operações através de um menu.

## Avaliação

O projeto será avaliado com base nos seguintes critérios:

1. Correção: O programa funciona como esperado?
2. Design do código: O código é bem estruturado e fácil de entender?
3. Uso de conceitos aprendidos: O projeto aplica os conceitos aprendidos no curso?

Boa sorte com o seu projeto! Lembre-se, a prática é a chave para aprender qualquer linguagem de programação. 😊

