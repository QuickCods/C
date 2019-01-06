#include <stdio.h>

#define MAX 100

int repetidos(int vec[],int size){
	for(int i = 0; i < size; i++){
		for(int j = i+1; j < size; j++){
			if(vec[i] == vec[j])
				return 1;
		}
	}
	return 0;
}

int main(void){
	int val_lido[MAX], i = 0;

	printf("Indique os valores(termina em 0 ou max de 100 val): ");
	scanf("%d", &val_lido[i]);

	while(val_lido[i] && i < MAX){
		i++;
		scanf("%d", &val_lido[i]);
	}

	if(repetidos(val_lido, i)){
		printf("Existem valores repetidos\n");
	}
	else{
		printf("Não existem valores repetidos\n");
	}
}
