#include <stdio.h>
#include <locale>
int main (){
	setlocale(LC_ALL, "Portuguese");
	int n, i, j, potencia, resultado = 0;
	printf("Digite um n�mero inteiro positivo: ");
    scanf("%d", &n);
    for (i = 0; i <= n; i++) {
        potencia = 1;
        for (j = 0; j < i; j++) {
            potencia *= n;
        }
        resultado += potencia;
    }
    printf("A soma das pot�ncias de %d de 0 at� %d-�sima pot�ncia �: %d\n", n, n, resultado);
    return 0;
}
