#include <stdio.h>
#include <string.h>

void ordenar(char vec[], int n){    //insert sort
	int i, j;

	for(i = 1; i < n; i++){
		int x = vec[i];
		j = i-1;
		while(j >= 0 && vec[j] > x){
			vec[j+1] = vec[j];
			j--;
		}
		vec[j+1] = x;
	}
}

int main(void){
	char c[] = "caralhos";
	int l = strlen(c);

	ordenar(c, l);

	for(int i = 0; i < l; i++){
		printf("%c",c[i]);
	}
	printf("\n");
}
