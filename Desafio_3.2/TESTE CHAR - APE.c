#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <locale.h>

void verificar_char(int valor) {
    if (valor < CHAR_MIN || valor > CHAR_MAX) {
        printf("Erro, ocorreu um Overflow!! O valor que foi inserido (%d), n�o est� dentro do limite de char de acordo com a lib: <limits.h> [%d, %d].\n", valor, CHAR_MIN, CHAR_MAX);
    } else {
        char caractere = (char)valor;
        printf("Sucesso!! O valor que foi inserido (%d) est� dentro do limite de char de acordo com a lib: <limits.h>. \n", valor);
    }
}


int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("Limites das vari�veis em C: \n");

    printf("\n");

    printf("char:\n");
    printf("M�nimo: %d\n", CHAR_MIN);
    printf("M�ximo: %d\n", CHAR_MAX);
   
    printf("\n");
    
    
    int valor;
    printf("Insira um valor para char: ");
    scanf("%d", &valor);

    
    verificar_char(valor);

    
    return 0;
    
}
