int mediana(int a, int b, int c){

	int t;

	while (!(a <= b && b <= c)){

		if(a > b){
			t = a;
			a = b;
			b = t;
		}

		if(b > c){
			t = b;
			b = c;
			c = t;
		}
	}

	return b;
}
