int potencia(int x, int n){

	int potencia = 1;
	for (int i = 1; n > 0 && i <= n; ++i){
		potencia *= x;
	}
	return potencia;
}
