#include <stdio.h>
#include <locale>
int main(){
	setlocale (LC_ALL, "Portuguese");
	int a, b;
	printf("Escreva dois n�meros inteiros: ");
	scanf("%d %d", &a, &b);
	if(a>b){
		printf("O numero maior � %d", a);
	}
	else
		printf("O numero maior � %d", b);
	return 0;
}
