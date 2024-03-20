#include <stdio.h>
#include <locale>
int main(){
	setlocale (LC_ALL, "Portuguese");
	float valorReal, cotacaoDolar, valorDolar;
	printf("Escreva em reais o valor: ");
	scanf("%f", &valorReal);
	printf("Escreva a cotação do dolar hoje: ");
	scanf("%f", &cotacaoDolar);
	valorDolar=valorReal/cotacaoDolar;
	printf("O valor do dolar é: %.2f", valorDolar);
	return 0;
}
