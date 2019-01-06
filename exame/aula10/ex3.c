#include <stdio.h>

void decompor(int total_seg, int *horas, int *mins, int *segs){
	*horas = total_seg / 3600;      //60min*60segs
	*mins = (total_seg - (*horas * 3600)) / 60;
	*segs = total_seg - (*horas * 3600) - (*mins * 60);
}

int main(void){
	int horas, minutos, segundos;
	int totseg = 45000;

	decompor(totseg, &horas, &minutos, &segundos);

	printf("%ds = %dh:%dm:%ds\n", totseg, horas, minutos, segundos);
}
