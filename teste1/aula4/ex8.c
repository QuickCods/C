#include <stdio.h>

int main(void){
	int dec, bin = 0, x10 = 1, tmp;

	printf("Numero a converter: ");
	scanf("%d", &dec);

	while(dec != 0){
		tmp = dec%2;
		dec /= 2;
		bin += tmp * x10;
		x10 *= 10;
	}
	printf("%d\n", bin);
}
