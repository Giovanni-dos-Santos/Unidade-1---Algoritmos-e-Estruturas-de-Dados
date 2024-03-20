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
	printf("O total com desconto é %.2f \n", des);
	printf("O total da parcela é %.2f\n", parc_cli);
	printf("A comissão a vista do vendedor é  %.2f\n", comi_fun);
	printf("A comissão parcelada do vendedor é %.2f\n", par_fun);
	return 0;
	}
