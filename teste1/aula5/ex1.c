#include <stdio.h>
#define FALSE 0
#define TRUE 1

int primo(int n){
	int d;
	if(n <= 1)
		return FALSE;
	for(d = 2; d*d < n; d++){
		if(n%d == 0)
			return FALSE;
	}
	return TRUE;
}

int main(void){
	int lim;
	printf("Limite superior: ");
	scanf("%d", &lim);

	for(int i = 2; i <= lim; i++){
		if(primo(i)){
			printf("%d\t", i);
		}
	}
	printf("\n");
	return 0;
}
