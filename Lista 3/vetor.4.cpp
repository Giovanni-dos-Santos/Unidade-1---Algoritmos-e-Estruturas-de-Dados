#include <stdio.h>
#include <locale>
int main(){
	setlocale(LC_ALL,"portuguese");
	int vetor[8], i;
	printf("Digite 8 números:\n");
	for (i=0; i<8; i++){
		scanf("%d", &vetor[i]);
	}
	printf("Vetor na ordem inversa:\n");
    for (i = 7; i >= 0; i--) {
        printf("%d\n", vetor[i]);
    }
    return 0;
}
