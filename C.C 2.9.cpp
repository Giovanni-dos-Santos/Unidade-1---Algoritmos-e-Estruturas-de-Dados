#include <stdio.h>
#include <locale>
#include <math.h>
int main(){
	setlocale (LC_ALL, "Portuguese");
	float a, b, conta;
	printf("Digite o valor do salário: ");
	scanf("%f", &a);
	printf("Digite o valor da prestação: ");
	scanf("%f", &b);
	conta=a*0,20;
	if(b>conta){
		printf("Empréstimo não concedido");
	}
	else	
		printf("Empréstimo concedido");
	return 0;
	}
