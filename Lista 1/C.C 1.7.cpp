#include <stdio.h>
#include <locale>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float a, suc, ant;
	printf("Escreva um n�mero: ");
	scanf("%d", &a);
	suc = a+1;
	ant=a-1;
	printf("O sucessor � %d", suc);
	printf("O antecessor � %d", ant);
	return 0;
	}
