#include <stdio.h>
#include <locale>
int main (){
	setlocale(LC_ALL, "Portuguese");
	int totalnumeros = 10, i;
    double numero, soma = 0, media;
    printf("Digite %d n�meros:\n", total_numeros);
    for (i = 1; i <= total_numeros; i++) {
        printf("N�mero %d: ", i);
        scanf("%lf", &numero);
        soma += numero;
    }
    media = soma / total_numeros;
    printf("A m�dia dos %d n�meros �: %.2lf\n", total_numeros, media);
    return 0;
}
