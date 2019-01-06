#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define TRUE 1
#define FALSE 0
#define MAX 64

int forte(char str[]){
	int maiusc = 0, minusc = 0, alg = 0, dim = strlen(str);

	if(dim < 6)
		return 0;

	for(int i = 0; i < dim; i++){
		if(islower(str[i]))   //if(str[i] >= 'a' && str[i] <= 'z')
			minusc++;
		if(isupper(str[i]))   //if(str[i] >= 'A' && str[i] <= 'Z')
			maiusc++;
		if(isdigit(str[i]))   //if(str[i] >= '0' && str[i] <= '9')
			alg++;

		if(minusc > 0 && maiusc > 0 && alg > 0)
			return TRUE;
	}

	return FALSE;
}

//para testar

int main(){
	int x = 0;
	char ch, a[MAX] = {0};
	printf("Introduza a sua palavra passe:");
	while ((ch=getchar()) != EOF){
		a[x] = ch;
		++x;
	}
	if (forte(a))
		printf("A palavra passe é segura.\n");
	else
		printf("Escolhe algo melhor.\n");
	return 0;
}
