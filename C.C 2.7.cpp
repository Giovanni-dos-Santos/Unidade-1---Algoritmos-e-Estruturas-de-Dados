#include <stdio.h>
#include <locale>
#include <math.h>
int main(){
	setlocale (LC_ALL, "Portuguese");
	int a, b;
	printf("Escreva dois n�meros\n");
	scanf("%d %d", &a, &b);
	if(a==b){
		printf("N�meros iguais");
	}
	else if(a>b)
		printf("O n�mero maior � %d", a);
	else
		printf("O n�mero maior � %d", b);
	return 0;
	}
