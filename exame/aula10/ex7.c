#include <stdio.h>

int contar_espacos(char *str){
	int espacos = 0;

	while (*str != '\0'){
		if(*str == ' ')
			espacos++;
		*str++;
	}

	return espacos;
}

int main(){
	char a[6] = "a b 1";

	printf("O número de espaços é %d\n",contar_espacos(a));
}
