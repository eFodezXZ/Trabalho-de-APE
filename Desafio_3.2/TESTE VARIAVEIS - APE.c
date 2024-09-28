#ifndef REMOVE_H
#define REMOVE_H 

#include <math.h>

int func_val(int X, int B);

#endif 

#include <stdio.h>
#include <limits.h>
#include <locale.h>


void verificar_char(int valor) {
    if (valor < CHAR_MIN || valor > CHAR_MAX) {
        printf("Erro, ocorreu um Overflow!! O valor que foi inserido (%d) n�o est� dentro do limite de char de acordo com a lib: <limits.h>\n", valor);
    } else {
        printf("Sucesso!! O valor que foi inserido (%d) est� dentro do limite de char de acordo com a lib: <limits.h>\n", valor);
    }
}

void verificar_int(int valor) {
    if (valor < INT_MIN || valor > INT_MAX) {
        printf("Erro, ocorreu um Overflow!! O valor que foi inserido (%d) n�o est� dentro do limite de int de acordo com a lib: <limits.h>\n", valor);
    } else {
        printf("Sucesso!! O valor que foi inserido (%d) est� dentro do limite de int de acordo com a lib: <limits.h>\n", valor);
    }
}


void verificar_short(int valor) {
    if (valor < SHRT_MIN || valor > SHRT_MAX) {
        printf("Erro, ocorreu um Overflow!! O valor que foi inserido (%d) n�o est� dentro do limite de short int de acordo com a lib: <limits.h>\n", valor);
    } else {
        printf("Sucesso!! O valor que foi inserido (%d) est� dentro do limite de short int de acordo com a lib: <limits.h>\n", valor);
    }
}


void verificar_unsigned_int(unsigned int valor) {
    printf("Sucesso!! O valor que foi inserido (%u) est� dentro do limite de unsigned int de acordo com a lib: <limits.h>\n", valor);
}


void verificar_long(long int valor) {
    if (valor < LONG_MIN || valor > LONG_MAX) {
        printf("Erro, ocorreu um Overflow!! O valor que foi inserido (%ld) n�o est� dentro do limite de long int de acordo com a lib: <limits.h>\n", valor);
    } else {
        printf("Sucesso!! O valor que foi inserido (%ld) est� dentro do limite de long int de acordo com a lib: <limits.h>\n", valor);
    }
}


void verificar_unsigned_long(unsigned long int valor) {
    printf("Sucesso!! O valor que foi inserido (%lu) est� dentro do limite de unsigned long int de acordo com a lib: <limits.h>\n", valor);
}


void verificar_long_long(long long int valor) {
    if (valor < LLONG_MIN || valor > LLONG_MAX) {
        printf("Erro, ocorreu um Overflow!! O valor que foi inserido (%lld) n�o est� dentro do limite de long long int de acordo com a lib: <limits.h>\n", valor);
    } else {
        printf("Sucesso!! O valor que foi inserido (%lld) est� dentro do limite de long long int de acordo com a lib: <limits.h>\n", valor);
    }
}


void verificar_unsigned_long_long(unsigned long long int valor) {
    printf("Sucesso!! O valor que foi inserido (%llu) est� dentro do limite de unsigned long long int de acordo com a lib: <limits.h>\n", valor);
}

int func_val(int X, int B) {
    double resultado = X + B; 
    return (int)round(resultado); 
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int valor;

    printf("Insira um valor para verificar o limite de char:\n ");
    scanf("%d", &valor);
    verificar_char(valor);
    
    	printf("\n");
    
    printf("Insira um valor para verificar o limite de int:\n ");
    scanf("%d", &valor);
    verificar_int(valor);
    
    	printf("\n");

    printf("Insira um valor para verificar o limite de short int:\n ");
    scanf("%d", &valor);
    verificar_short(valor);
    
    	printf("\n");

    printf("Insira um valor para verificar o limite de unsigned int:\n ");
    scanf("%d", &valor);
    if (valor >= 0) {
        verificar_unsigned_int((unsigned int)valor);
    }
    
    	printf("\n");

    printf("Insira um valor para verificar o limite de long int:\n ");
    scanf("%ld", &valor);
    verificar_long(valor);
    
    	printf("\n");

    printf("Insira um valor para verificar o limite de unsigned long int:\n ");
    scanf("%ld", &valor);
    if (valor >= 0) {
        verificar_unsigned_long((unsigned long int)valor);
    }

		printf("\n");

    printf("Insira um valor para verificar o limite de long long int:\n ");
    scanf("%lld", &valor);
    verificar_long_long((long long int)valor);
    
    	printf("\n");

    printf("Insira um valor para verificar o limite de unsigned long long int:\n ");
    scanf("%lld", &valor);
    if (valor >= 0) {
        verificar_unsigned_long_long((unsigned long long int)valor);
    }

    return 0;
}

