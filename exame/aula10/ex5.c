#include <stdio.h>

int mdc(int a, int b){

	while(a != b){
		if(a > b)
			a = a - b;
		else if(b > a)
			b = b -a;
	}
	return a;
}

void reduzir(int *pnum, int *pdenom){
	int m = mdc(*pnum, *pdenom);

	*pnum = *pnum / m;
	*pdenom = *pdenom / m;
}

int main(void){
	int a, b;

	printf("Numerador ");
	scanf("%d", &a);
	printf("Denominador ");
	scanf("%d", &b);

	reduzir(&a, &b);

	printf("A fração reduzida fica %d/%d\n", a, b);
}
