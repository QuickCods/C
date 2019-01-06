#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

int palindromo(char str[]){
	int j = strlen(str) - 1;

	for(int i = 0; i < j; i++){
		if(toupper(str[i]) != toupper(str[j]))
			return FALSE;
		j--;
	}
	return TRUE;
}

int main(void){
	char texto[] = {'A','n','A','A','\0'};
	int flag = palindromo(texto);

	if(flag)
		printf("É\n");
	else
		printf("Não é\n");
}
