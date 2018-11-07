#include <stdio.h>

int mdc(int a, int b){
	int t;

	while(b != 0){
		t = a%b;
		a = b;
		b = t;

	/*while(a != b){
		if(a > b)
			a = a-b;
		else
			b = b-a;*/
	}
	return a;
}

int main(void){
	int a, b, div;

	printf("Numerador: ");
	scanf("%d", &a);
	printf("Denominador: ");
	scanf("%d", &b);

	div = mdc(a,b);

	printf("%d/%d é igual a %d/%d\n", a, b, a/div, b/div);
}
