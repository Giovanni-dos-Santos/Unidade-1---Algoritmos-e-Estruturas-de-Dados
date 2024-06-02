#include <stdio.h>
#include <locale>
int main (){
	setlocale(LC_ALL, "Portuguese");
	int n, i, j, potencia, resultado = 0;
	printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);
    for (i = 0; i <= n; i++) {
        potencia = 1;
        for (j = 0; j < i; j++) {
            potencia *= n;
        }
        resultado += potencia;
    }
    printf("A soma das potências de %d de 0 até %d-ésima potência é: %d\n", n, n, resultado);
    return 0;
}
