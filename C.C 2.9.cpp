#include <stdio.h>
#include <locale>
#include <math.h>
int main(){
	setlocale (LC_ALL, "Portuguese");
	float a, b, conta;
	printf("Digite o valor do sal�rio: ");
	scanf("%f", &a);
	printf("Digite o valor da presta��o: ");
	scanf("%f", &b);
	conta=a*0,20;
	if(b>conta){
		printf("Empr�stimo n�o concedido");
	}
	else	
		printf("Empr�stimo concedido");
	return 0;
	}
