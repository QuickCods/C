#include <stdio.h>

int main(void){
	int n, max = 0;

	printf("Introduza os valor:");
	scanf("%d", &n);

	while(n != 0){
		if(n > max)
			max = n;
		scanf("%d", &n);
	}

	printf("O valor máximo é %d\n", max);
}
