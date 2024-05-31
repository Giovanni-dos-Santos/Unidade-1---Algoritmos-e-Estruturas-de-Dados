#include <stdio.h>
#include <locale>
int main(){
	setlocale(LC_ALL,"portuguese");
	float vetor[20];
	int i;
	printf("Digite 20 números:\n");
	for (i=0; i<20; i++){
		scanf("%f", &vetor[i]);
    }
    float soma = 0;
  	for (int i = 0; i < 20; i++) {
    soma += vetor[i];
  }
    float media = soma / 20.00;
    printf("A média dos valores armazenados no vetor é: %.2f\n", media);
    return 0;
}

	
