#include <stdio.h>

char prox_letra(char ch){
	if(ch >= 'a' && ch < 'z')
		return ch + 1;
	else if(ch >= 'A' && ch < 'Z')
		return ch + 1;
	else if(ch == 'z' || ch == 'Z')
		return ch - 25;
}

int main(void)
{
	char ch;
	printf("Escreva o texto:\n");
	while ((ch = getchar()) != '\n')
		putchar(prox_letra(ch));
	printf("\n");

	return 0;
}
