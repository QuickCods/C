#include <stdio.h>

int contar_maiores(int vec[], int size, int val){
	int count = 0;

	for(int i = 0; i < size; i++){
		if(vec[i] > val)
			count++;
	}

	return count;
}

int main(void){
	int numeros[] = {0,1,2,3,4,5,6,7,8,9,'\0'};
	int dim = 10;
	int ref = 5;
	printf("Foram encontrados %d numeros maiores do que %d\n", contar_maiores(numeros, dim, ref), ref);
}
