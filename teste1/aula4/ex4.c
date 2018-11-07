#include <stdio.h>

int main(void){
	float n, media, soma = 0;
	int count = 0;

	printf("Introduza os valores: ");

	do{
		scanf("%f", &n);
		soma += n;
		count++;
	} while(n != 0);

	media = soma/(count-1);

	printf("A media aritmetica é %.3f\n", media);
}
