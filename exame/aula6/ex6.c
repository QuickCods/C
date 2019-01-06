#include <stdio.h>

int ocorre(int vec[], int size, int val){
	for(int i = 0; i < size; i++){
		if(vec[i] == val)
			return 1;
	}
	return 0;
}

int main(void){
	int vec[100];
	int val, i = 0;

	scanf("%d", &val);					//ler repeetidamente
	while(val != -1){					//testar repetidamente
		if((ocorre(vec, i, val)) == 0){
			vec[i] = val;
			i++;
		}
		scanf("%d", &val);
	}
	printf("Vetor: ");					//apresentar resultado
	for(int j = 0; j < i; j++)
		printf("%d ", vec[j]);
	printf("\n");
}
