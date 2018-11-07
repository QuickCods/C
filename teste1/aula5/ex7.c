#include <ctype.h>

int main(void){
	int ch, pontos = 0;
	while ((ch = getchar()) != '\n'){
		ch = toupper(ch);
		switch(ch){
			case 'D':
			case 'G': pontos += 2;
			break;

			case 'B':
			case 'C':
			case 'M':
			case 'P': pontos += 3;
			break;

			case 'F':
			case 'H':
			case 'V':
			case 'W':
			case 'Y': pontos += 4;
			break;

			case 'K': pontos += 5;
			break;

			case 'J':
			case 'X': pontos += 8;
			break;

			case 'Q':
			case 'Z': pontos += 10;
			break;

			default: pontos += 1;
		}
	}
	printf("%d pontos\n", pontos);
}
