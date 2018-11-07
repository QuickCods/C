#include <stdio.h>
#include <ctype.h>

int main(void){
	char ch, last;
	last = getchar();

	printf("%c", last);

	while((ch = getchar()) != EOF)
	{
		if(last == ' ')
			printf("%c",toupper(ch));
		else
			printf("%c",ch);
		last = ch;
	}
	return 0;
}
