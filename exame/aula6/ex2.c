#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10

double getRand(){
	int d;
	d = (1 + rand() / (RAND_MAX / (9 - 1 + 1) + 1));
	return d;
}

int main(void){
	int certas = 0, erradas = 0;
	srand((unsigned)time(NULL));

	for(int i = 0; i < MAX; i++){
		int a, b, user, result;
		a = getRand();
		b = getRand();
		result = a * b;

		printf("Quanto é %d x %d? ", a, b);
		scanf("%d", &user);

		if(user == result){
			certas++;
			printf("Certo!");
		}
		else{
			erradas++;
			printf("Errado! O resultado é %d", result);
		}

		printf("\n");
	}

	printf("%d repostas certas\n%d respostas erradas\n", certas, erradas);
}
