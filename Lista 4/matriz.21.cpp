#include <stdio.h>
#include <locale>
int main(){
	setlocale(LC_ALL,"portuguese");
	int matriz[3][3], i, j, identidade = 1;
    printf("Digite os elementos da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (i == j) {
                if (matriz[i][j] != 1) {
                    identidade = 0;
                    break;
                }
            } else {
                if (matriz[i][j] != 0) {
                   identidade = 0;
                    break;
                }
            }
        }
        if (!identidade) {
            break;
        }
    }
    if (identidade) {
        printf("A matriz é uma matriz identidade.\n");
    } else {
        printf("A matriz não é uma matriz identidade.\n");
    }
