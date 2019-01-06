#include <stdio.h>
#include <stdlib.h>

char *procurar(char *str, char ch){
	while(*str != '\0'){
		if(*str == ch)
			return str;
		str++;
	}
	return NULL;
}

//so para testar ( confuso as fuck)
/*
int main(){
	char a[256] = "olaeioupl";
	char ch;
	char *x;

	printf("Qual é o caracter que quer procurar:");
	scanf("%c",&ch);

	x = procurar(a,ch);

	printf("O caracter foi: %s, %s, %ld\n",x,a,x-a);

	*x = '\0';

	printf("O caracter foi: %s, %s, %ld\n",x,a,x-a);
	return 0;
}
*/
