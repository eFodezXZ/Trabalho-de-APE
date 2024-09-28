#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "Cabeçalho.h"

int main()
{
	int quant, b, x, decc, i, k;// x = posição decc = decimal i e k = flags
    char hexmensagem[101];
    char decode[3]; 
    char* point;
    printf("Digite quantas mensagens vou decodificar: \n");
    scanf("%d", &quant);
    for(k = quant; k > 0; k--){
    	printf("\nDigite a mensagem a ser decodificada: \n");
    	//fgets(hexmensagem, 101, stdin); 
    	scanf("%100s", hexmensagem);

    	printf("Digite o b\n");
    	scanf("%d", &b);

    	for(i = 0; i < strlen(hexmensagem); i+= 2){
    	x = i / 2 + 1;
    	int veri = func_val(x, b);
    	if(veri != 0){
    	decode[sizeof(decode) - 1] = '\0';              
		strncpy(decode, hexmensagem + i, 2);                        
    	decc = strtol(decode, &point, 16);
    		if (decc == 0){
        	break;
    	}
    		printf("%c", decc); 
   		}
}	
}
    return 0;
}
