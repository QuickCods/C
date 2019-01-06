#include <stdio.h>

//ordem decrescente

void select_sort(int vec[], int n){
	for(int i = 0; i < n; i++){
		int imax = i;         //indice inicial do máximo
		for(int j = i+1; j < n; j++){
			if(vec[j] > vec[imax])     //ordem crescente basta mudar o sinal
				imax = j;
		}

		if(imax != i){       //trocar o max com vec[i]
			int tmp = vec[i];
			vec[i] = vec[imax];
			vec[imax] = tmp;
		}
	}
}

int main(void){
	int vec[] = {5,4,79,6,1,5,7,89,4,5,'\0'};
	int size = 10;

	select_sort(vec, size);

	for(int i = 0; i < size; i++){
		printf("%d  ", vec[i]);
	}
	printf("\n");
}
