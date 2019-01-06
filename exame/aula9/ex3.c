#include <stdio.h>
#include <string.h>
#include <ctype.h>

void neutralizar(char *str){
	for(int i =0; str[i] != '\0'; i++){
		if(isalpha(str[i])){
			if(isupper(str[i])){
				tolower(str[i]);
			}
		}
		else{
			for(int b=i; str[b] != '\0'; b++)
				str[b] = str[b+1];
		}
	}
}

void ordenar(char *str){
	int min,pos;
	for(int i=0; str[i] != '\0'; i++){
		pos = i;
		min = str[i];
		for (int k = i+1; str[k] != '\0';k++){
			if (str[k] < min){
				min = str[k];
				pos = k;
			} 
		}
		if(pos != i){
			str[pos] = str[i];
			str[i] = min;
		}
	}
}

int anagramas(char str1[], char str2[]){
	int size1 = strlen(str1);
	int size2 = strlen(str2);
	if (size1 != size2)
		return 0;

	neutralizar(str1);
	neutralizar(str2);
	ordenar(str1);
	ordenar(str2);
	for (int i = 0; i < size1; i++)
		if(str1[i] != str2[i]){
			return 0;
		}
	return 1;

}

int main(){
	char str1[] = "wh3at is lif!e";
	char str2[] = "life wh?at i1s";
	int r = anagramas(str1, str2);
	if(r == 1)
		printf("São anagramas\n");
	else
		printf("Não são anagramas\n");
}
