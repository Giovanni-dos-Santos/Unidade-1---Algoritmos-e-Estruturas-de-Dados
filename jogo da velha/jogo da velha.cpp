#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");
    int vetor[3][3] = {0}, i, j, lin, col, jogador = 1, jogadas = 0;
    while (1) {
        printf("\nTabuleiro atual:\n");
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                if (vetor[i][j] == 0) {
                    printf("   ");
                } else if (vetor[i][j] == 1) {
                    printf(" X ");
                } else {
                    printf(" O ");
                }
                if (j < 2) {
                    printf("|");
                }
            }
            printf("\n");
            if (i < 2) {
                printf("---+---+---\n");
            }
        }
        if ((vetor[0][0] == jogador && vetor[0][1] == jogador && vetor[0][2] == jogador) || 
            (vetor[1][0] == jogador && vetor[1][1] == jogador && vetor[1][2] == jogador) || 
            (vetor[2][0] == jogador && vetor[2][1] == jogador && vetor[2][2] == jogador) || 
            (vetor[0][0] == jogador && vetor[1][0] == jogador && vetor[2][0] == jogador) || 
            (vetor[0][1] == jogador && vetor[1][1] == jogador && vetor[2][1] == jogador) || 
            (vetor[0][2] == jogador && vetor[1][2] == jogador && vetor[2][2] == jogador) || 
            (vetor[0][0] == jogador && vetor[1][1] == jogador && vetor[2][2] == jogador) || 
            (vetor[0][2] == jogador && vetor[1][1] == jogador && vetor[2][0] == jogador)) {
            printf("\nJogador %d venceu!\n", jogador);
            printf("Ass: Giovanni dos Santos");
            break;
        }
        printf("\nJogador %d, digite a linha e coluna para sua jogada (0 a 2):\n", jogador);
        scanf("%d %d", &lin, &col);
        if (lin < 0 || lin > 2 || col < 0 || col > 2) {
            printf("Posição inválida. Tente novamente.\n");
            continue;
        }
        if (vetor[lin][col] != 0) {
            printf("Essa posição já está ocupada. Tente novamente.\n");
            continue;
        }        
		vetor[lin][col] = jogador;
        jogadas++;
        jogador = (jogador == 1) ? 2 : 1;
        if (jogadas == 9) {
            printf("\nEmpate!\n");
            printf("Ass: Giovanni dos Santos");
            break;
        }
    }    
	return 0;
}
