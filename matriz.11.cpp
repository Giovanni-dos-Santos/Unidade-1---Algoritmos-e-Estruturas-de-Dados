#include <stdio.h>
#include <locale>
int main(){
	setlocale(LC_ALL,"portuguese");
	int matriz[3][3], i, j, contagem;
    printf("Digite os elementos da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
	for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
        	if(matriz [i][j]==0){
				contagem++;
			}		
    	}
	}
	printf("\n A Matriz 3x3 possui %d zeros:\n", contagem);
	return 0;
}
