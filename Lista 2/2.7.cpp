#include <stdio.h>
#include <locale>
int main (){
	setlocale(LC_ALL, "Portuguese");
	int numero, soma = 0;
	printf("Digite um n�mero inteiro: ");
    scanf("%d", &numero);
    while (numero != 0) {
        soma += numero % 10;
        numero /= 10;
    }
    printf("A soma dos d�gitos do n�mero �: %d\n", soma);
    return 0;
}
