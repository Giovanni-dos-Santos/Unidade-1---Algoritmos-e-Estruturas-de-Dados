#include <stdio.h>
#include <locale>
int main(){
	setlocale (LC_ALL, "Portuguese");
	int a, b;
	printf("Escreva dois números inteiros: ");
	scanf("%d %d", &a, &b);
	if(a>b){
		printf("O numero maior é %d", a);
	}
	else
		printf("O numero maior é %d", b);
	return 0;
}
