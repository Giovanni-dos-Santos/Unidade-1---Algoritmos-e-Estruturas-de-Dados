#include <stdio.h>
#include <locale>
int main (){
	setlocale(LC_ALL, "Portuguese");
	int numero, contagem = 0, maior = 0;
	printf("Digite uma lista de números. Digite 0 para parar:\n");
    printf("Digite o próximo número: ");
    scanf("%d", &numero);
    while (numero != 0 && contagem < 20) {
        if (numero > maior) {
            maior = numero;
        }
        contagem++;
        if (contagem < 20) {
            printf("Digite o próximo número: ");
            scanf("%d", &numero);
        }
    }
    if (contagem == 0) {
        printf("A lista está vazia.\n");
    } else {
        printf("O maior número na lista é: %d\n", maior);
    }
    return 0;
}
