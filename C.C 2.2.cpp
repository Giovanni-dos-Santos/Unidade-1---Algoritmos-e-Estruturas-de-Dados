#include <stdio.h>
#include <locale>
#include <math.h>
int main(){
	setlocale (LC_ALL, "Portuguese");
	int a, raiz_quad;
	printf("Escreva n�meros inteiros: ");
	scanf("%d", &a);
	raiz_quad=sqrt(a);
	if(a>0){
		printf("O numero maior � %d", raiz_quad);
	}
	else
		printf("N�mero Invalido");
	return 0;
}
