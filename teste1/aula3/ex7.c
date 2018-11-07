#include <stdio.h>

int main(void){

	int a, b, c, t;

	printf("Primeiro valor: ");
	scanf("%d", &a);
	printf("Segundo valor: ");
	scanf("%d", &b);
	printf("Terceiro valor: ");
	scanf("%d", &c);

	while (!(a <= b && b <= c)){

		if(a > b){
			t = a;
			a = b;
			b = t;
		}

		if(b > c){
			t = b;
			b = c;
			c = t;
		}
	}

	printf("A mediana é %d\n", b);

	return 0;
}
