#include "Cabeçalho.h"

int func_val(int x, int b){
    //Uso do tipo de variavel double pois tem um limite maior e evita que ocorra um overflow.
 	double a0, a1, a2, a3, a4, a5, a6, a7;
 	
	a0 = 186.752;
	a1 = -148.235;
	a2 = 34.5049;
	a3 = -3.5091;
	a4 = 0.183166;
	a5 = -0.00513554;
	a6 = 0.0000735464;
	a7 = -4.22038 * pow(10, -7);

	return round((int)(a0 + (a1 + b) * x + a2 * pow(x, 2) + a3 * pow(x, 3) + a4 * pow(x, 4) + a5 * pow(x, 5) + a6 * pow(x, 6) + a7 * pow(x, 7))); //Retornar a equação para o código principal
}
