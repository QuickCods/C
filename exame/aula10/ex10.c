#include <stdio.h>
#include <string.h>

int comparar(char *str1, char *str2){
	if(strlen(str1) != strlen(str2))
		return 0;

	while(*str1 != '\0'){
		if(*str1 != *str2)
			return 0;
		*str1++;
		*str2++;
	}

	return 1;
}


int main(){
	char a[256] = "abcdefgh";
	char b[256] = "abcdefgh";
	if (comparar(a,b)){
		printf("As cadeias são iguais\n");
	}
	else
		printf("São diferentes\n");
}
