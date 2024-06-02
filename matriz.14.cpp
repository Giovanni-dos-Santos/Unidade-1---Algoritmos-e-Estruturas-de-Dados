#include <stdio.h>
#include <locale>
int main(){
	setlocale(LC_ALL,"portuguese");
	int matrizA[2][2], matrizB[2][2], i, j, sao_iguais=1;
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
   for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            if (matrizA[i][j] != matrizB[i][j]) {
                sao_iguais = 0;
            }
        }
    }
    if (sao_iguais)
        printf("A matriz A e B são iguais.\n");
    else
        printf("A matriz A e B não são iguais.\n");
    return 0;
}

