#include <stdio.h>
#include <locale>
int main(){
	setlocale(LC_ALL,"portuguese");
	int vetor[12], i;
	printf("Digite 12 números:\n");
	for (i=0; i<12; i++){
		scanf("%d", &vetor[i]);
	}
	for (i = 0; i < 12; i++) {
        if (vetor[i] < 0) {
            vetor[i] = 0;
        }
    }
	printf("Elementos do vetor:\n");
	for (i = 0; i < 12; i++){
		printf("%d ", vetor[i]);
	}
	return 0;
}
