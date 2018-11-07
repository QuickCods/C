#include <stdio.h>

double serie_log(double x, int n){
	double total=x, soma_interna, potencias = x;

	for(int count = 2; count <= n; count++){
		potencias *= x;
		soma_interna = potencias / count;

		if(count % 2 == 0)
		{
			soma_interna *= -1;
		}

		total += soma_interna;
	}

	return total;
}

int main(void)
{
	double x;
	int n;

	printf("log(1 + <x>: ");
	scanf("%lf", &x);
	printf("com aproximacao a <n> iteracoes: " );
	scanf("%d", &n);

	printf("\nlog(1 + %lf) = %lf\n", x, serie_log(x, n));
	return 0;
}
