#include <stdio.h>
#include <locale>
int main(){
	setlocale(LC_ALL,"portuguese");
	int matriz[4][4], i, j, linha_escolhida, soma=0;
    printf("Digite os elementos da matriz 4x4:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Digite o número da linha (0 a 3) para calcular a soma dos elementos: ");
    scanf("%d", &linha_escolhida);
    if (linha_escolhida >= 0 && linha_escolhida < 4) {
        for (j = 0; j < 4; j++) {
            soma += matriz[linha_escolhida][j];
        }
        printf("A soma dos elementos da linha %d é: %d\n", linha_escolhida, soma);
    } 
	else {
        printf("Linha escolhida inválida.\n");
    }
    return 0;
}
