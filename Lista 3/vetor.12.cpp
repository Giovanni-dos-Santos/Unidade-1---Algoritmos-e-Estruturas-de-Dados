#include <stdio.h>
#include <locale>
int main(){
	setlocale(LC_ALL,"portuguese");
    int tamanho, i, maior, menor;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    int vetor[tamanho];
    printf("Digite os elementos do vetor:\n");
    for (i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    maior = vetor[0];
	menor = vetor[0];
	for (i = 1; i < tamanho; i++) {
    	if (vetor[i] > maior) {
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }
    printf("O maior valor no vetor é: %d\n", maior);
    printf("O menor valor no vetor é: %d\n", menor);
    return 0;
}
