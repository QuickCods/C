int desordem(int vec[], int size){
	int count = 0;

	for(int i = 0; i < size - 1; i++){
		if(vec[i] > vec[i+1])
			count++;
	}
	return count;
}
