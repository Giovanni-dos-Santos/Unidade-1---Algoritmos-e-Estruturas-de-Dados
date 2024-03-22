#include <stdio.h>
#include <locale>
#include <math.h>
int main(){
	setlocale (LC_ALL, "Portuguese");
	int a, raiz_quad;
	printf("Escreva números inteiros: ");
	scanf("%d", &a);
	raiz_quad=sqrt(a);
	if(a>0){
		printf("O numero maior é %d", raiz_quad);
	}
	else
		printf("Número Invalido");
	return 0;
}
