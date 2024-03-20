#include <stdio.h>
#include <locale>
int main(){
	setlocale (LC_ALL, "Portuguese");
	float a, b, c, d, media;
	printf("Escreva de suas notas: ");
	scanf("%f %f %f %f", &a, &b, &c, &d);
	media=(a+b+c+d)/4;
	printf("A média é: %.1f", media);
	return 0;
}
