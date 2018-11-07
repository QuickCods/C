#include <stdio.h>

int main(void){
	int a, b, c, d, num, den;

	printf("N1 = "); scanf("%d", &a);
	printf("D1 = "); scanf("%d", &b);
	printf("N2 = "); scanf("%d", &c);
	printf("D1 = "); scanf("%d", &d);

	num = a*d + b*c;
	den	= b*d;

	printf("%d/%d + %d/%d = %d/%d\n", a, b, c, d, num, den);

	return 0;

}
