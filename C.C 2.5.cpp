#include <stdio.h>
#include <locale>
#include <math.h>
int main(){
	setlocale (LC_ALL, "Portuguese");
	int a;
	printf("Escreva um número inteiro: ");
	scanf("%d", &a);
	
	if(a % 2 == 0){
		printf("O número digitado é PAR");
	}
	else
		printf("O número digitado é ÍMPAR");
	return 0;
}
