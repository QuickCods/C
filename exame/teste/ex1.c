long fatorial(int n){
	long f = 1;
	for(int i = 1; i <= n; i++)
		f *= i;
	return f;
}

long binomial(int n, int k){
	long num, denom;

	num = fatorial(n);
	denom = fatorial(k) * fatorial(n - k);

	return num/denom;
}
