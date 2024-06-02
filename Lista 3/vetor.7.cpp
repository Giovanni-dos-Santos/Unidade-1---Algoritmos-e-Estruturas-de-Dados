#include <stdio.h>
#include <locale>
int main(){
	setlocale(LC_ALL,"portuguese");
	int vetor[30], i, frequencia[30] = {0}, elementoMaisFrequente, maxFrequencia = 0;;
	printf("Digite 30 números:\n");
	for (i=0; i<30; i++){
		scanf("%d", &vetor[i]);
	}
	for (i = 0; i < 30; i++) {
        frequencia[vetor[i]]++;
    }
    for (i = 0; i < 30; i++) {
        if (frequencia[i] > maxFrequencia) {
            maxFrequencia = frequencia[i];
            elementoMaisFrequente = i;
        }
    }
    printf("O elemento que mais aparece é: %d\n", elementoMaisFrequente);
    return 0;
}
