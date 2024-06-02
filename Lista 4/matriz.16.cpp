#include <stdio.h>
#include <locale>
int main(){
	setlocale(LC_ALL,"portuguese");
	int matriz[5][5], i, j, maior = 0, linha_maior, coluna_maior;
    printf("Digite os elementos da matriz A:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                linha_maior = i;
                coluna_maior = j;
            }
        }
    }
    printf("O maior elemento da matriz é: %d\n", maior);
    printf("Posição (linha, coluna): (%d, %d)\n", linha_maior, coluna_maior);
	return 0;
}
