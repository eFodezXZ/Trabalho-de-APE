#ifndef REMOVE_H
#define REMOVE_H 

#include <math.h>

int func_val(int X, int B); 

#endif 

#include <stdio.h>
#include <limits.h>
#include <locale.h>

// char -> CHAR_MIN = char mínimo, CHAR_MAX = char máximo

// int -> INT_MIN = int mínimo, INT_MAX = int máximo

// short int -> SHRT_MIN = short int mínimo, SHRT_MAX = short int máximo

// unsigned int -> UINT_MAX = unsigned int máximo 

// long int -> LONG_MIN = long int mínimo, LONG_MAX = long int máximo 

// unsigned long int -> ULONG_MAX = unsigned long int máximo

// long long int -> LLONG_MIN = long long int mínimo, LLONG_MAX = long long int máximo

// unsigned long long int -> ULLONG_MAX = unsigned long long int máximo



void verificar_char(int valor) {
    if (valor < CHAR_MIN || valor > CHAR_MAX) {
        printf("Erro, ocorreu um Overflow!! O valor que foi inserido (%d), não está dentro do limite de char de acordo com a lib: <limits.h> [%d, %d].\n", valor, CHAR_MIN, CHAR_MAX);
    } else {
        char caractere = (char)valor;
        if (valor != 0) {
            printf("Sucesso!! O valor que foi inserido (%d) está dentro do limite de char de acordo com a lib: <limits.h>. \n", valor, caractere);
        } else {
            printf("O valor inserido é 0 (zero), portanto será ignorado.\n");
        }
    }
}



int func_val(int X, int B) {
    double resultado = X + B; 
    return (int)round(resultado); 
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("Limites das variáveis em C:\n");

    	printf("\n");

    printf("char:\n");
    printf("Mínimo: %d\n", CHAR_MIN);
    printf("Máximo: %d\n", CHAR_MAX);

    	printf("\n");

    printf("int:\n");
    printf("Mínimo: %d\n", INT_MIN);
    printf("Máximo: %d\n", INT_MAX);

    	printf("\n");

    printf("short int:\n");
    printf("Mínimo: %d\n", SHRT_MIN);
    printf("Máximo: %d\n", SHRT_MAX);

    	printf("\n");

    printf("unsigned int:\n");
    printf("Mínimo: N/A\n");
    printf("Máximo: %u\n", UINT_MAX);

    	printf("\n");

    printf("long int:\n");
    printf("Mínimo: %ld\n", LONG_MIN);
    printf("Máximo: %ld\n", LONG_MAX);

    	printf("\n");

    printf("unsigned long int:\n");
    printf("Mínimo: N/A\n");
    printf("Máximo: %lu\n", ULONG_MAX);

    	printf("\n");

    printf("long long int:\n");
    printf("Mínimo: %lld\n", LLONG_MIN);
    printf("Máximo: %lld\n", LLONG_MAX);

    	printf("\n");

    printf("unsigned long long int:\n");
    printf("Mínimo: N/A\n");
    printf("Máximo: %llu\n", ULLONG_MAX);

    	printf("\n");

    int valor_char;
    printf("Insira qualquer valor para verificar os limites de char: ");
    scanf("%d", &valor_char);
    verificar_char(valor_char); 

    int X, B;
    printf("Insira um valor para x: ");
    scanf("%d", &X);
    printf("Insira um valor para b: ");
    scanf("%d", &B);

    int resultado = func_val(X, B);
    verificar_char(resultado); 

    return 0;
}

