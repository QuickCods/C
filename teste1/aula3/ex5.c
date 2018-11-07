#include <stdio.h>

int main(void){

	int v1, v2, v3, vmax, vmin, amp;


	printf("Primeiro valor: ");
	scanf("%d", &v1);
	printf("Segundo valor: ");
	scanf("%d", &v2);
	printf("Terceiro valor: ");
	scanf("%d", &v3);

	if (v1 >= v2 && v1 >= v3)
		vmax = v1;
	else if (v2 >= v1 && v2 >= v3)
		vmax = v2;
	else
		vmax = v3;

	if (v1 <= v2 && v1 <= v3)
		vmin = v1;
	else if (v2 <= v1 && v2 <= v3)
		vmin = v2;
	else
		vmin = v3;

	amp = vmax - vmin;

	printf("O valor maximo é %d, o valor minimo é %d e a amplitude é %d.\n", vmax, vmin, amp);

	return 0;
}
