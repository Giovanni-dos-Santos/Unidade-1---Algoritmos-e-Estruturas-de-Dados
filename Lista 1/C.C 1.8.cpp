#include <stdio.h>
#include <locale>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float salariobase, conta, salariototal;
	printf("Escreva seu salário: ");
	scanf("%f", &salariobase);
	conta=salariobase*0.05;
	salariototal=salariobase+conta;
	printf("O total é %.2f", salariototal);
	return 0;
	}
