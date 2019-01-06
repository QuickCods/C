#include <stdio.h>

int mediana(int a, int b, int c){
	int t;

	while(!((a <= b) && (b <= c))){
		if(a > b){
			t = a;
			a = b;
			b = t;
		}

		if(b > c){
			t = b;
			b = c;
			c = a;
		}
	}
	return b;
}

int partition(int vec[], int l, int u){
	int m, temp, j;
	m = l;
	int p = mediana(vec[l], vec[u], ((vec[l] + vec[u]) / 2));

	if(p == vec[l])
		j = l;
	else if(p == vec[u])
		j = u;
	else if(p == ((vec[l] + vec[u]) / 2))
		j = ((l + u) / 2);

	temp = vec[l];
	vec[l] = vec[j];
	vec[j] = temp;

	for(int i = l + 1; i <= u; i++){
		if(vec[i] < vec[l]){
			m++;
			temp = vec[i];
			vec[i] = vec[m];
			vec[m] = temp;
		}
	}

	temp = vec[l];
	vec[l] = vec[m];
	vec[m] = temp;

	return m;
}

void quicksort_rec(int vec[], int l, int u){
	int m;

	if(l >= u)
		return;

	m = partition(vec, l, u);
	quicksort_rec(vec, l, m-1);
	quicksort_rec(vec, m+1, u);
}

int main(void){
	int vec[] = {5,2,4,9,1};

	quicksort_rec(vec, 0, 4);

	for(int i = 0; i <= 4; i++){
		printf("vec[%d] = %d", i, vec[i]);
	}
	printf("\n");
}
