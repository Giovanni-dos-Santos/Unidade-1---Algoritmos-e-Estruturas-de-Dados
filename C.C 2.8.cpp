#include <stdio.h>
#include <locale>
#include <math.h>
int main(){
	setlocale (LC_ALL, "Portuguese");
	float a, b, media;
	printf("Escreva a primeira nota: ");
	scanf("%f", &a);
	printf("Escreva a primeira nota: ");
	scanf("%f", &b);
	media=(a+b)/2;
	if(a>0, a<10, b>0, b<10){
		printf("A media das notas é %.2f", media);
	}
	else	
		printf("Valor inválido");
	return 0;
	}
