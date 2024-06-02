#include <stdio.h>
#include <locale>
int main(){
	setlocale(LC_ALL,"portuguese");
	int matriz[3][3], i, j, soma_coluna[3] = {0};
    printf("Digite os elementos da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
	for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            soma_coluna[j] += matriz[i][j];
        }
    }
	printf("Soma das colunas:\n");
    for (i = 0; i < 3; i++) {
        printf("Coluna %d: %d\n", i + 1, soma_coluna[i]);
    }
	return 0;
}
