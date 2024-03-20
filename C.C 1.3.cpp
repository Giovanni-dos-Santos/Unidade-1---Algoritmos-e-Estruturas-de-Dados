#include <stdio.h>
#include <locale>
int main(){
	setlocale (LC_ALL, "Portuguese");
	int a, b, c, soma;
	printf("Escreva o valor de A, B e C: ");
	scanf("%d %d %d", &a, &b, &c);
	soma=a+b+c;
	printf("A Soma é: %d", soma);
	return 0;
}
