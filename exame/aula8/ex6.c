#include <stdio.h>

void select_sort(int vec[], int n){
	for(int i = 0; i < n; i++){
		int imax = i;
		for(int j = i+1; j < n; j++){
			if(vec[j] > vec[imax])
				imax = j;
		}

		if(imax != i){
			int tmp = vec[i];
			vec[i] = vec[imax];
			vec[imax] = tmp;
		}
	}
}

int segundo_menor(int vec[], int n){
	select_sort(vec, n);
	return vec[n-2];
}

int main(void){
	int vec[] = {5,4,79,6,1,5,7,89,4,5,'\0'};
	int size = 10;

	printf("%d\n", segundo_menor(vec, size));
}
