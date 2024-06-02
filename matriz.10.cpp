#include <stdio.h>
#include <locale>
int main(){
	setlocale(LC_ALL,"portuguese");
	int matriz[2][2], i, j, elemento, encontrado=0;
    printf("Digite os elementos da matriz 3x3:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Digite o elemento a ser verificado: ");
    scanf("%d", &elemento);
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            if (matriz[i][j] == elemento) {
                encontrado = 1;
                break; //
            }
        }
        if (encontrado) {
            break;
        }
    }
    printf("\nMatriz 2x2:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    if (encontrado) {
        printf("\nO elemento %d está presente na matriz.\n", elemento);
    } else {
        printf("\nO elemento %d não está presente na matriz.\n", elemento);
    }
    return 0;
}
