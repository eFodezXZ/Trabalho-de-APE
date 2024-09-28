#include <stdio.h>

int validarNota(float nota, float min, float max, const char *nome) {
    if (nota < min || nota > max) {
        	printf("Erro: %s fora do intervalo permitido (%.1f a %.1f).\n", nome, min, max);
      return 0; 
    }
    	return 1; 
}

void substituirMenorNota(float *N1, float *N2, float *PPD, float N3) {
    	if (*N1 <= *N2 && *N1 <= *PPD) {
        	*N1 = N3;
   	} else if (*N2 <= *N1 && *N2 <= *PPD) {
       	 *N2 = N3;
    	} else {
        	*PPD = N3;
    	}
}

float calcularNotaFinal(float N1, float N2, float PPD) {
    	return N1 + N2 + PPD;
}

void verificarAprovacao(float notaFinal) {
    		printf("Nota final: %.2f\n", notaFinal);
    	if (notaFinal >= 7.0) {
        	printf("Aprovado.\n");
    	} else {
        	printf("Reprovado.\n");
    	}
}

int main() {
    	float N1, N2, PPD, EU = 0, N3 = 0, notaFinal;
    	int fez_EU, fez_N3;

    		printf("Insira a nota N1 (0 a 4.5): ");
    		scanf("%f", &N1);
    	if (!validarNota(N1, 0, 4.5, "N1")) return 1;

    		printf("Insira a nota N2 (0 a 4.5): ");
    		scanf("%f", &N2);
    	if (!validarNota(N2, 0, 4.5, "N2")) return 1;

    		printf("Insira a nota PPD (0 a 1): ");
    		scanf("%f", &PPD);
    	if (!validarNota(PPD, 0, 1, "PPD")) return 1;

    		printf("Fez o Exame Unificado? (0 = nao, 1 = sim): ");
    		scanf("%d", &fez_EU);
    	if (fez_EU == 1) {
        	printf("Insira a nota do Exame Unificado (0 a 1): ");
        	scanf("%f", &EU);
      if (!validarNota(EU, 0, 1, "Exame Unificado")) return 1;
    }

    		printf("Fez a N3? (0 = nao, 1 = sim): ");
    		scanf("%d", &fez_N3);
    	if (fez_N3 == 1) {
        	printf("Insira a nota N3 (0 a 4.5): ");
       	 scanf("%f", &N3);
      if (!validarNota(N3, 0, 4.5, "N3")) return 1;
      	substituirMenorNota(&N1, &N2, &PPD, N3); 
    }

    	notaFinal = calcularNotaFinal(N1, N2, PPD);

    	verificarAprovacao(notaFinal);

   	return 0;
}

