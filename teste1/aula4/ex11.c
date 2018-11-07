#include <stdio.h>

int main(void){
	int a;

	printf("Numero inteiro: ");
	scanf("%d", &a);

	if(a <= 0){
		printf("O numero nao é positivo\n");
	}

	else if(a == 1){
		printf("1: 1\n");
	}

	else{
		printf("%d: ", a);

		for(int i = 2; i <= a; i++){
			while(a%i == 0){
				printf("%d ", i);
				a /= i;
			}
		}
		printf("\n");
	}
}
