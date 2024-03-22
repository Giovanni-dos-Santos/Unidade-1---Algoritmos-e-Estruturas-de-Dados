#include <stdio.h>
#include <locale>
#include <math.h>
int main(){
	setlocale (LC_ALL, "Portuguese");
	int a, b;
	printf("Escreva dois números\n");
	scanf("%d %d", &a, &b);
	if(a==b){
		printf("Números iguais");
	}
	else if(a>b)
		printf("O número maior é %d", a);
	else
		printf("O número maior é %d", b);
	return 0;
	}
