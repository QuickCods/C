#include <stdio.h>

int desordem(int vec[], int size){
	int count = 0;

	for(int i = 0; i < size - 1; i++){
		if(vec[i] > vec[i+1])
			count++;
	}
	return count;
}

int main(){
	int a[] = {3,1,2,2,4,0,'\0'};
	printf("O número de pares desordenados nesta sequência é %d\n",desordem(a,6));
}
