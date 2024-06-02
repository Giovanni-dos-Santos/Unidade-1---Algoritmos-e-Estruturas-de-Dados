#include <stdio.h>
#include <locale>
int main(){
	setlocale(LC_ALL,"portuguese");
	int matriz[2][2], i, j;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
        	if ((i + j) % 2 == 0) {
                matriz[i][j] = 1;
            } else {
                matriz[i][j] = 0;
            }
        }
    }
    printf("Matriz 2x2 preenchida:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
