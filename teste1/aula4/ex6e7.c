#include <stdio.h>

int bissexto(int n){
	if((n%4 == 0 && n%100 != 0)||(n%400 == 0))
		return 1;
	else
		return 0;
}

int prox_bissexto(int n){
	while(!((n%4 == 0 && n%100 != 0)||(n%400 == 0)))
		n++;
	return n;
}

int main(void){
	int ano;
	printf("Qual o ano? ");
	scanf("%d", &ano);
	if(bissexto(ano))
		printf("%d é um ano bissexto\n", ano);
	else if(prox_bissexto(ano))
		printf("%d náo é ano bissexto e o ano bissexto a seguir é %d\n", ano, prox_bissexto(ano));
}
