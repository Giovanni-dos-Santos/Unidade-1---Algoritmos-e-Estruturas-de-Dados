#include <stdio.h>
#include <locale>
#include <math.h>
int main(){
	setlocale (LC_ALL, "Portuguese");
	int a, dif_a, b, dif_b;
	printf("Escreva dois n�meros inteiros\n");
	scanf("%d %d", &a, &b);
	dif_a=a-b;
	dif_b=b-a;
	if(a>b){
		printf("A diferen�a entre %d e %d � %d", a, b, dif_a);
	}
	else
		printf("A diferen�a entre %d e %d � %d", b, a, dif_b);
	return 0;
}
