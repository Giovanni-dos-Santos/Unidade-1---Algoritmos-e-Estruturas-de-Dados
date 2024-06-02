#include <stdio.h>
#include <locale>
int main(){
	setlocale(LC_ALL,"portuguese");
    int tamanho, i;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    int vetor[tamanho];
    printf("Digite os elementos do vetor:\n");
    for (i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i+1);
        scanf("%d", &vetor[i]);
    }printf("Vetor na ordem inversa:\n");
    for (i = tamanho - 1; i >= 0; i--) {
        printf("%d\n", vetor[i]);
    }
    return 0;
}
