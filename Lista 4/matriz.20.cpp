#include <stdio.h>
#include <locale>
int main(){
	setlocale(LC_ALL,"portuguese");
	int matriz[6][6], i, j, contador_negativos = 0;
    printf("Digite os elementos da matriz 3x3:\n");
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            if (matriz[i][j] < 0) {
                contador_negativos++;
            }
        }
    }
    printf("O número de números negativos na matriz é: %d\n", contador_negativos);
    return 0;
}
