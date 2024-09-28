#ifndef REMOVE_H
#define REMOVE_H 

#include <math.h>

int func_val(int X, int B); 

#endif 

#include <stdio.h>
#include <limits.h>
#include <locale.h>

// char -> CHAR_MIN = char m�nimo, CHAR_MAX = char m�ximo

// int -> INT_MIN = int m�nimo, INT_MAX = int m�ximo

// short int -> SHRT_MIN = short int m�nimo, SHRT_MAX = short int m�ximo

// unsigned int -> UINT_MAX = unsigned int m�ximo 

// long int -> LONG_MIN = long int m�nimo, LONG_MAX = long int m�ximo 

// unsigned long int -> ULONG_MAX = unsigned long int m�ximo

// long long int -> LLONG_MIN = long long int m�nimo, LLONG_MAX = long long int m�ximo

// unsigned long long int -> ULLONG_MAX = unsigned long long int m�ximo



void verificar_char(int valor) {
    if (valor < CHAR_MIN || valor > CHAR_MAX) {
        printf("Erro, ocorreu um Overflow!! O valor que foi inserido (%d), n�o est� dentro do limite de char de acordo com a lib: <limits.h> [%d, %d].\n", valor, CHAR_MIN, CHAR_MAX);
    } else {
        char caractere = (char)valor;
        if (valor != 0) {
            printf("Sucesso!! O valor que foi inserido (%d) est� dentro do limite de char de acordo com a lib: <limits.h>. \n", valor, caractere);
        } else {
            printf("O valor inserido � 0 (zero), portanto ser� ignorado.\n");
        }
    }
}



int func_val(int X, int B) {
    double resultado = X + B; 
    return (int)round(resultado); 
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("Limites das vari�veis em C:\n");

    	printf("\n");

    printf("char:\n");
    printf("M�nimo: %d\n", CHAR_MIN);
    printf("M�ximo: %d\n", CHAR_MAX);

    	printf("\n");

    printf("int:\n");
    printf("M�nimo: %d\n", INT_MIN);
    printf("M�ximo: %d\n", INT_MAX);

    	printf("\n");

    printf("short int:\n");
    printf("M�nimo: %d\n", SHRT_MIN);
    printf("M�ximo: %d\n", SHRT_MAX);

    	printf("\n");

    printf("unsigned int:\n");
    printf("M�nimo: N/A\n");
    printf("M�ximo: %u\n", UINT_MAX);

    	printf("\n");

    printf("long int:\n");
    printf("M�nimo: %ld\n", LONG_MIN);
    printf("M�ximo: %ld\n", LONG_MAX);

    	printf("\n");

    printf("unsigned long int:\n");
    printf("M�nimo: N/A\n");
    printf("M�ximo: %lu\n", ULONG_MAX);

    	printf("\n");

    printf("long long int:\n");
    printf("M�nimo: %lld\n", LLONG_MIN);
    printf("M�ximo: %lld\n", LLONG_MAX);

    	printf("\n");

    printf("unsigned long long int:\n");
    printf("M�nimo: N/A\n");
    printf("M�ximo: %llu\n", ULLONG_MAX);

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

