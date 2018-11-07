#include <stdio.h>

int main(void){

	int v1, v2, v3, contagem = 0;

	printf("Primeiro valor: ");
	scanf("%d", &v1);
	printf("Segundo valor: ");
	scanf("%d", &v2);
	printf("Terceiro valor: ");
	scanf("%d", &v3);

	if (v1 != v2)
		contagem++;
	if (v1 != v3)
		contagem++;
	if (v2 != v3)
		contagem++;
	if (v1 == v2 && v1 == v3)
		contagem++;	

	printf("%d valores distintos\n", contagem);

	return 0;

}
