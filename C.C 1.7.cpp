#include <stdio.h>
#include <locale>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float a, suc, ant;
	printf("Escreva um número: ");
	scanf("%d", &a);
	suc = a+1;
	ant=a-1;
	printf("O sucessor é %d", suc);
	printf("O antecessor é %d", ant);
	return 0;
	}
