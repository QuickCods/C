#include <stdio.h>

double aprox_raiz(double a, int n){
	double x0, xn, xn1;

	x0 = (a/2);
	xn = (x0 + a/x0)*0.5;

	for(int i = 0; i <= n; i++){
		xn1 = (xn + a/xn)*0.5;
		xn = xn1;
	}
	return xn1;
}

int main(void){
	double x;
	printf("Raiz de x a aproximar: ");
	scanf("%lf", &x);

	printf("É aproxiamdo a %.10lf\n", aprox_raiz(x,10));
}
