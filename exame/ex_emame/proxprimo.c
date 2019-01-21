#include <stdio.h>
#define FALSE 0
#define TRUE 1

int primo(int n){
	if(n <= 1)
		return FALSE;
	for(int d = 2; d*d <= n; d++){
		if(n%d == 0)
			return FALSE;
	}
	return TRUE;
}

int prox_primo(int n){
	if (n == 2)
		n = 3;
	else if(primo(n))
		n = prox_primo(n+1);
	else
		while(!primo(n))
			n++;
	return n;
}

int main(void){
	int x, n;
	printf("Qual o numero"); scanf("%d", &x);

	n = prox_primo(x);

	printf("%d\n", n);
}
