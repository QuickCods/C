#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

//alinea a - f

//inteiro - ambos os extremos devem ser incluídos

double getRand(){
	int d;
	d = (0 + rand() / (RAND_MAX / (9 - 0 + 1) + 1));
	return d;
}


//double - o extremo superior não deve ser incluído

double getRand(){
	double d;
	d = (0.0 + (double)rand() / ((double)RAND_MAX / (1.0 - 0.0 ) + 1.0));
	return d;
}



int main(void){
	double val = 0, r;
	srand((unsigned)time(NULL));
	for(int i = 0; i < MAX; i++){
		r = getRand();
		val += r;
		printf("%lf\n", r);
	}
	printf("Media: %lf\n", val);
}
