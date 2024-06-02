#include <stdio.h>
#include <locale>
int main(){
	setlocale(LC_ALL,"portuguese");
    int tamanho, vetor[tamanho], i;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    printf("Digite os elementos do vetor:\n");
    for (i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    printf("Elementos do vetor:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    return 0;
}
