#include <stdio.h>
#include <locale>
int main(){
	setlocale(LC_ALL,"portuguese");
    int tamanho, soma=0, i;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    int vetor[tamanho];
    printf("Digite os elementos do vetor:\n");
    for (i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    for (i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
	printf("A soma dos elementos do vetor é: %d\n", soma);
    return 0;
}
