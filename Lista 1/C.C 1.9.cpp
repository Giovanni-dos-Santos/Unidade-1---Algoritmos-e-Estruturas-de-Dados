#include <stdio.h>
#include <locale>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float compra, des, parc_cli, comi_fun, comi_fun_total, par_fun;
	printf("Escreva o valor: ");
	scanf("%f", &compra);
	des=compra-(compra*0.10);
	parc_cli=compra/3;
	comi_fun=compra-(compra*0.05);
	par_fun=(compra*0.05)+compra;
	printf("O total com desconto � %.2f \n", des);
	printf("O total da parcela � %.2f\n", parc_cli);
	printf("A comiss�o a vista do vendedor �  %.2f\n", comi_fun);
	printf("A comiss�o parcelada do vendedor � %.2f\n", par_fun);
	return 0;
	}
