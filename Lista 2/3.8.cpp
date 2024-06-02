#include <stdio.h>
#include <locale>
int main (){
	setlocale(LC_ALL, "Portuguese");
	int n, i, fatorial = 1;
	printf("Digite um número inteiro: ");
    scanf("%d", &n);
    for (i = 1; i <= n; ++i) {
    	fatorial *= i;
	}
	printf("O fatorial de %d é: %d\n", n, fatorial);
    return 0;
}
