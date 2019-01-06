#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double getRand(){
	int d;
	d = 1 + rand()/(RAND_MAX/1000 + 1);
	return d;
}

int main(void){
	int user, num, tentativas = 0;
	srand((unsigned)time(NULL));

	num = getRand();

	while(user != num){
		printf("Adivinha o número? ");
		scanf("%d", &user);
		tentativas++;

		if(user < num){
			printf("Número demasiado baixo!\n");
		}
		else if(user > num){
			printf("Número demasiado alto!\n");
		}
		else{
			printf("Acertou em %d tentativas\n", tentativas);
		}
	}
}
