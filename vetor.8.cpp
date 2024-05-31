#include <stdio.h>
#include <locale>
int main(){
	setlocale(LC_ALL,"portuguese");
	int vetor[15], i, j, temp;
	printf("Digite 15 números:\n");
	for (i=0; i<15; i++){
		scanf("%d", &vetor[i]);
	}
	for (i = 0; i < 15 - 1; i++) {
        for (j = 0; j < 15 - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
    printf("Vetor ordenado em ordem crescente:\n");
    for (int i = 0; i < 15; i++) {
        printf("%d ", vetor[i]);
    }
    return 0;
}
