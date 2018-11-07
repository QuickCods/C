#include <stdio.h>

int main(void){
	int v1, v2, v3;

	printf("Primeiro lado: ");
	scanf("%d", &v1);
	printf("Segundo lado: ");
	scanf("%d", &v2);
	printf("Terceiro lado: ");
	scanf("%d", &v3);

	if((v1 != v2) && (v2 != v3) && (v1 != v3))
		printf("Triangulo escaleno\n");
	else if ((v1 == v2 && v1 != v3) || (v2 == v3 && v2 != v1) || (v1 == v3 && v1 != v2))
		printf("Triangulo isosceles\n");
	else
		printf("Triangulo equilatero\n");

	return 0;
}
