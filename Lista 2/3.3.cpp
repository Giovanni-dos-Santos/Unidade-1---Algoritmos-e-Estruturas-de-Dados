#include <stdio.h>
#include <locale>
int main (){
	setlocale(LC_ALL, "Portuguese");
	int numerosecreto = 42, int tentativa;
    printf("Tente adivinhar o n�mero secreto!\n");
    for (int i = 1; i <= 999; i++) {
        printf("Tentativa %d: ", i);
        scanf("%d", &tentativa);
        if (tentativa == numerosecreto) {
            printf("Parab�ns! Voc� acertou o n�mero secreto!\n");
        } else {
            printf("Tente novamente.\n");
        }
    }
    return 0;
}
