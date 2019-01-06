#include <stdio.h>
#include <string.h>

void ordenar(char vec[], int n){      //insert sort
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

int anagramas(char str1[], char str2[]){
	int dim1 = strlen(str1), dim2 = strlen(str2);

	ordenar(str1, dim1);
	ordenar(str2, dim2);

	if(dim1 != dim2)
		return 0;

	for(int i = 0; i < dim1; i++){
		if(str1[i] != str2[i])
			return 0;
	}
	return 1;
}

int main(void){
	char str1[] = "deposit";
	char str2[] = "topside";

	int r = anagramas(str1, str2);

	if(r == 1)
		printf("São anagramas\n");
	else
		printf("Não são anagramas\n");
	return 0;
}
