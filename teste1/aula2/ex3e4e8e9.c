#include <stdio.h>
#define pi 3.1415

float ex4(float iva){
	return (iva*1.23);
}

float ex3(int r){
	return((4*pi*r*r*r)/3);
}

float ex8(float x){
	return(3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x + 7*x -6);
}

float ex9(float x){
	return((((((3*x + 2)* x-5)* x-1)* x+7)* x)-6);
}

/*int	main(void) {
	  float x, result;

	  printf("Inicio\n");

	  scanf("%f", &x);
	  result = ex9(x);
	  printf("O resultado é %f\n", result);

	  printf("Fim\n");
	  return 0;
}*/
