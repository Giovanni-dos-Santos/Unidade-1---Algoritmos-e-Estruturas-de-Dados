#include <stdio.h>
#include <locale>
int main (){
	setlocale(LC_ALL, "Portuguese");
	int numero, soma = 0;
	printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    while (numero != 0) {
        soma += numero % 10;
        numero /= 10;
    }
    printf("A soma dos dígitos do número é: %d\n", soma);
    return 0;
}
