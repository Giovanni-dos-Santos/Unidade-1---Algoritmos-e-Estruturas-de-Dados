#include <stdio.h>
#include <locale>
#include <math.h>
int main(){
	setlocale (LC_ALL, "Portuguese");
	int a;
	printf("Escreva um n�mero inteiro: ");
	scanf("%d", &a);
	
	if(a % 2 == 0){
		printf("O n�mero digitado � PAR");
	}
	else
		printf("O n�mero digitado � �MPAR");
	return 0;
}
