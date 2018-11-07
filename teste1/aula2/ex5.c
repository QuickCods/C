#include <stdio.h>

int main(void){
	int valor, n20, n10, n5, m1;

	printf("Valor = ");
	scanf("%d", &valor);

	n20 = valor/20;
	n10 = (valor%20)/10;
	n5 = ((valor%20)%10)/5;
	m1 = ((valor%20)%10)%5;

	printf("O troco dá com %d notas de 20, %d notas de 10, %d notas de 5, %d moedas de 1\n", n20, n10, n5, m1);

	return 0;

}
