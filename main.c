#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "Cabecalho.h"

int main() {
    int quant, b, x, decc, i, k; // quant = número de casos, b = variavel, x = posição, decc = valor decimal, i = Indice da string, k = contador de casos
    char hexmensagem[101]; // string de 100 caracteres
    char decode[3]; // buffer para conversão de 2 caracteres hexadecimais
    char* point; // usado para a conversão de string para long

    // Leitura do número de casos de teste
    printf("Digite o numero de mensagens que vou decodificar: \n");
    scanf("%d", &quant);

    // Loop para cada mensagem
    for(k = 0; k < quant; k++) {
        printf("\nDigite a mensagem a ser decodificada (100 caracteres no maximo): \n");
        scanf("%100s", hexmensagem); // Leitura da string hexadecimal

        printf("Digite o valor de b: \n");
        scanf("%d", &b); // Leitura da variável b

        // Loop para processar cada bloco de 2 caracteres da string hexadecimal
        for(i = 0; i < strlen(hexmensagem); i += 2) {
            x = i / 2 + 1; // Determinar a posição x, começaando em 1
            int veri = func_val(x, b); // Chamar a função para validar o caractere

            if(veri != 0) { // Se o resultado da função for diferente de 0, o caractere Ã© vÃ¡lido
                decode[2] = '\0'; // Terminar a string com null character
                strncpy(decode, hexmensagem + i, 2); // Copiar 2 caracteres da string hexadecimal
                decc = strtol(decode, &point, 16); // Converter o valor hexadecimal para decimal

                if (decc == 0) { // Se encontrar o caractere nulo (00), parar a leitura
                    break;
                }

                printf("%c", decc); // Imprimir o caractere decodificado
            }
        }
        printf("\n"); // Nova linha apÃ³s cada mensagem decodificada
    }

    return 0;
}
