#include <stdio.h>
#include <locale>
int main(){
	setlocale(LC_ALL,"portuguese");
	int matrizA[3][3], matrizB[3][3], i, j, soma[3][3];
    printf("Digite os elementos da matriz A:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }
    printf("Digite os elementos da matriz B:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matrizB[i][j]);
        }
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            soma[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
    printf("A soma das matrizes é:\n");
    printf("%d %d %d\n", soma[0][0], soma[0][1], soma[0][2]);
    printf("%d %d %d\n", soma[1][0], soma[1][1], soma[1][2]);
    return 0;
}
