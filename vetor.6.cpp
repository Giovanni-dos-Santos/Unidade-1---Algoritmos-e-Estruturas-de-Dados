#include <stdio.h>
#include <locale>
int main(){
	setlocale(LC_ALL,"portuguese");
	int vetorA[10], vetorB[10], i;
	printf("Digite 10 números:\n");
	for (i=0; i<10; i++){
		scanf("%d", &vetorA[i]);
	}
	for (i = 0; i < 10; i++) {
	vetorB[i] = vetorA[i];
	}
	printf("Elementos do vetor B:\n");
	for (i = 0; i < 10; i++){
		printf("%d ", vetorB[i]);
	}
	return 0;
}
