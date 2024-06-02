#include <stdio.h>
#include <locale>
#include <math.h>
int main(){
	setlocale (LC_ALL, "Portuguese");
	float a, b;
	printf("Digite o valor do salário: ");
	scanf("%f", &a);
	printf("Digite o valor da prestação: ");
	scanf("%f", &b);
	if(a*0.20<b){
		printf("Empréstimo não concedido");
	}
	else	
		printf("Empréstimo concedido");
	return 0;
	}

