#include <stdio.h>
#include <locale>
int main(){
	setlocale(LC_ALL,"portuguese");
	int matriz[4][3], i, j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
        	if ((i + j) % 2 == 0) {
                matriz[i][j] = 1 - i;
            } else {
                matriz[i][j] = 1 + i;
            }
        }
    }
    printf("Matriz 4x3 preenchida:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
