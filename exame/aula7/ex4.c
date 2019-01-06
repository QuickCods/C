#include <stdio.h>
#include <ctype.h>
#include <string.h>

int algum_digito(char str[]){
	int dim = strlen(str);

	for(int i = 0; i < dim; i++){
		if(isdigit(str[i]))
			return 1;
	}
	return 0;
}

int main(void){
	char texto[] = {'1','t','s','t','e','\0'};

	if(algum_digito(texto))
		printf("Tem números\n");
	else
		printf("Não tem números\n");
}
