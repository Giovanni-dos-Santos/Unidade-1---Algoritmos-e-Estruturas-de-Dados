#include <stdio.h>
#include <locale>
int main(){
	setlocale (LC_ALL, "Portuguese");
	float valorReal, cotacaoDolar, valorDolar;
	printf("Escreva em reais o valor: ");
	scanf("%f", &valorReal);
	printf("Escreva a cota��o do dolar hoje: ");
	scanf("%f", &cotacaoDolar);
	valorDolar=valorReal/cotacaoDolar;
	printf("O valor do dolar �: %.2f", valorDolar);
	return 0;
}
