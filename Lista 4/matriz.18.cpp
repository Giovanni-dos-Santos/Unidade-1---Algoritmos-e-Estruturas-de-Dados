#include <stdio.h>
#include <locale>
int main(){
	setlocale(LC_ALL,"portuguese");
	int matrizA[2][2], matrizB[2][2], i, j, k, resultado[2][2];
    printf("Digite os elementos da matriz A:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }
    printf("Digite os elementos da matriz B:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matrizB[i][j]);
        }
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                resultado[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }
    printf("O resultado da multiplicação das matrizes é:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }
    return 0;
}
