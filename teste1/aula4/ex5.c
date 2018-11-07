#include <stdio.h>

int soma_divisores(int n){
	int soma = 0;

	for(int i = 1; i <= n/2; i++)
		if(n%i == 0)
			soma += i;
	return soma;
}

int main(void){
	int n;
	printf("Numero: ");
	scanf("%d", &n);
	printf("Soma dos divisores de %d é %d\n", n, soma_divisores(n));
}
