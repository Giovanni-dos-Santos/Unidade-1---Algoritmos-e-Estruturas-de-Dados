#include <stdio.h>
#include <locale>
int main(){
	setlocale (LC_ALL, "Portuguese");
	float a, qua;
	printf("Escreva o valor de A: ");
	scanf("%f", &a);
	qua=a*a;
	printf("A Soma é: %.2f", qua);
	return 0;
}
