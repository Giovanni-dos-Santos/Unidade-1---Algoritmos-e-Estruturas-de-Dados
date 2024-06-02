#include <stdio.h>
#include <locale>
int main(){
	setlocale(LC_ALL,"portuguese");
	int matriz[3][2], i, j, transposta[2][3];
    printf("Digite os elementos da matriz A:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
	for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }
    printf("Matriz transposta:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }
    return 0;
}
