#include <stdio.h>
#include <ctype.h>

int main(void){
	int count = 0;
	char ch;

	while((ch = getchar()) != '\n'){
		if(isalpha(ch)){
			count++;
	}
	printf("A frase contém %d caracteres\n", count);
}
