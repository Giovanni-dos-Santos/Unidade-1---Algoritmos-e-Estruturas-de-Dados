#include <stdio.h>
#include <locale>
int main (){
	setlocale(LC_ALL, "Portuguese");
	int n, i, numero, soma = 0;
	printf("Digite o valor de n: ");
    scanf("%d", &n);
    printf("Digite os %d n�meros da sequ�ncia:\n", n);
    for (i = 1; i <= n; i++) {
        printf("Digite o n�mero %d: ", i);
        scanf("%d", &numero);
        soma += numero;
    }
    printf("A soma da sequ�ncia �: %d\n", soma);
    return 0;
}
