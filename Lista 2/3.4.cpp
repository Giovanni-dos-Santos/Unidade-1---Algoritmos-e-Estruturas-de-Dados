#include <stdio.h>
#include <locale>
int main (){
	setlocale(LC_ALL, "Portuguese");
	int totalnumeros = 10, i;
    double numero, soma = 0, media;
    printf("Digite %d números:\n", total_numeros);
    for (i = 1; i <= total_numeros; i++) {
        printf("Número %d: ", i);
        scanf("%lf", &numero);
        soma += numero;
    }
    media = soma / total_numeros;
    printf("A média dos %d números é: %.2lf\n", total_numeros, media);
    return 0;
}
