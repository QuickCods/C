#include <stdio.h>

void max_min(int vec[], int size, int *pmax, int *pmin){
	*pmax = vec[0];
	*pmin = vec[0];

	for(int i = 0; i < size; i++){
		if(*pmax < vec[i])
			*pmax = vec[i];

		if(*pmin > vec[i])
			*pmin = vec[i];
	}
}

int main(void){
	int max, min;
	int vec[] = {1,8,5,6,9,2};

	max_min(vec, 6, &max, &min);

	printf("O valor maximo é %d e o mínimo é %d\n", max, min);

	return 0;
}
