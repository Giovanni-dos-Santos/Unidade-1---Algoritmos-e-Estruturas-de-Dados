#include <stdio.h>
#include <locale>
int main(){
	setlocale(LC_ALL,"portuguese");
	int matriz[4][4], i, j, soma = 0;
    printf("Digite os elementos da matriz A:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for (i = 0; i < 4; i++) {
    	for (j = 0; j < 4; j++) {
            soma += matriz[i][j];
        }
    }
    printf("A soma de todos os elementos da matriz é: %d\n", soma);
	return 0;
}
