#include <stdio.h>
#include <locale>
#include <math.h>
int main(){
	setlocale (LC_ALL, "Portuguese");
	float a, raiz_quad, quad;
	printf("Escreva n�meros real: ");
	scanf("%f", &a);
	raiz_quad=sqrt(a);
	quad=a*a;
	if(a>0){
		printf("A raiz quadrada � %.2f\n", raiz_quad);
		printf("o n�mera ao quadrado � %.2f", quad);
	}
	else
		printf("N�mero Invalido");
	return 0;
}
