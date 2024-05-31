#include <stdio.h>
#include <locale>
int main(){
	setlocale(LC_ALL,"portuguese");
	int vetor[10], i;
	printf("Digite 10 números:\n");
	for (i=0; i<10; i++){
		scanf("%d", &vetor[i]);
	}
	printf("Elementos do vetor:\n");
	for (i = 0; i < 10; i++){
		printf("%d ", vetor[i]);
	}
	return 0;
}
