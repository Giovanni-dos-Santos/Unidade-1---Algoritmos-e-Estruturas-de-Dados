#include <stdio.h>
#include <locale>
int main (){
	setlocale(LC_ALL, "Portuguese");
	int numerosecreto = 42, int tentativa;
    printf("Tente adivinhar o número secreto!\n");
    for (int i = 1; i <= 999; i++) {
        printf("Tentativa %d: ", i);
        scanf("%d", &tentativa);
        if (tentativa == numerosecreto) {
            printf("Parabéns! Você acertou o número secreto!\n");
        } else {
            printf("Tente novamente.\n");
        }
    }
    return 0;
}
