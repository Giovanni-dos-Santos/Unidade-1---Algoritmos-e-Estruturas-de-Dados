#include <stdio.h>
#include <locale>
int main(){
	setlocale(LC_ALL,"portuguese");
	int matriz[3][2], i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
			matriz[i][j] = 0;
        }
    }
    printf("Matriz 2x2 preenchida com o número 1:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
