#include <stdio.h>
#include <ctype.h>

#define MAX 100

void contar_letras(char str[], int size){
	int Alpha_contador[26];
	char Alpha[26];
	for(int i = 0; i < 26; i++){           //A = 65 e Z = 90
		Alpha[i] = 65 + i;             //preenchar Alpha de A a Z
	}

	for(int letra = 0; letra < 26; letra++){           //cada letra em Alpha
		int n = 0;                                 //contar as vezes que aparece
		for(int j = 0; j < size; j++){             //para cada letra da string
			if(Alpha[letra] == str[j]){
				n++;
			}
		}
		Alpha_contador[letra] = n;
	}

	for(int i = 0; i < 26; i++){
		if(i % 5 == 0)
			printf("\n");
		printf("%c: %d\t", Alpha[i], Alpha_contador[i]);
	}
	printf("\n");
}

int main(void){
	char texto[MAX];
	int c = 0;

	while((texto[c] = toupper(getchar())) != EOF){      //termina com ctrl+D
		c++;
	}

	contar_letras(texto, c-1);

	return 0;
}
