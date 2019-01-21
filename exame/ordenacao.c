//ordenaçao por seleção

void select_sort(int vec[], int n){
	int i, j;

	for(i = 0; i < n; i++){
		int imin = i;

		for(j = i + 1; j < n; j++){
			if(vec[j] < vec<[imin])
				imin = j;
		}

		if(imin != i){
			int temp = vec[i];
			vec[i] = vec[imin];
			vec[imin] = temp;
		}
	}
}

//ordenaçao por insercao

void inser_sort(int vec[], int n){
	int i, j;

	for(i = 1; i < n; i++){
		int x = vec[i];
		j = i - 1;

		while(j >= 0 && vec[j] > x){
			vec[j+1] = vec[j];
			j--;
		}

		vec[j+1] = x;
	}
}

//ordenaçao quicksort

int partition(int vec[], int l, int u){
	int i, m, temp;
	m = l;         //m: indice do ponto médio

	for(i = l + 1; i <= u; i++){
		if(vec[i] < vec[l]){      //fora de ordem
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
		return;     //caso base; termina logo
	//senao caso recursivo
	m = partition(vec, l, u);     //partir usando pivot
	quicksort_rec(vec, l, m-1);   //senao caso recursivo
	quicksort_rec(vec, m+1, u);   // ordenar vec[m+1..u]
}

//bubble sort

void bubble_sort(int vec[], int n){
	for(int i = 0; i < n - 1; i++){
		for(int j = 0; j < n - i - 1; j++){
			if(vec[j] > vec[j+1]){
				int temp = vec[j];
				vec[j] = vec[j+1];
				vec[j+1] = temp;
			}
		}
	}
}
