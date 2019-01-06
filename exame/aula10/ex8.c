#include <stdio.h>
#include <string.h>

void inverter(char *str){
	int j = strlen(str) - 1;
	char *x = str + j;
	char t;

	while(str < x){
		t = *str;
		*str = *x;
		*x = t;
		x--;
		str++;
	}
}

int main(void){
	char text[1000];
	fgets(text, 1000, stdin); 	         	// ler
	puts(text); 					// imprimir original
	inverter(text); 				// inverter
	puts(text); 					// imprimir invertido
}
