#include <stdio.h>

int calc_diff(int a, int b){
	if(a > b)
		return a - b;
	return b - a;
}

int main(void)
{
	int a, b, iter = 1, t;
	printf("Cálculo do mdc (a, b):\n");
	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);

	printf("mdc(%d,%d)", a, b);

	do{
		if(a > b){
			a = calc_diff(a,b);
		}
		else
			b = calc_diff(a,b);

		printf(" = mdc(%d,%d)", a, b);

		iter++;
	} while(b != a);

	printf(" = %d\n%d iterações\n", a, iter);

	return 0;
}
