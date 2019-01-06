#include <stdio.h>

//original
/*
void store_zeros(int vec[], int n)
int i;
for(i = 0; i<n; i++)
vec[i] = 0;
}
*/

void store_zeros(int *vec){
	while(*vec != '\0'){
		*vec = 0;
		*vec++;
	}
}

int main(void){
	int a[5] = {1};

	store_zeros(a);

	for(int i = 0; i < 5; i++)
		printf("a[%d]=%d\n",i,a[i]);
}
