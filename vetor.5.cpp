#include <stdio.h>
#include <locale>
int main(){
	setlocale(LC_ALL,"portuguese");
	int vetor[10], i, contapares=0;
	printf("Digite 10 n�meros:\n");
	for (i=0; i<10; i++){
		scanf("%d", &vetor[i]);
	}
	for (i = 0; i < 10; i++) {
        if (vetor[i] % 2 == 0) {
            contapares++;
        }
    }
    printf("O vetor cont�m %d n�meros pares.\n", contapares);
    return 0;
}
