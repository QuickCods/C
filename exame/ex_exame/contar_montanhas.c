#include <stdio.h>
#include <string.h>

int contar_montanhas(char ch[]){
	int count = 0, montanhas = 0, n;
	n = strlen(ch);
	for(int i = 0; i < n; i++){
		if(ch[i] == 'S')
			count++;
		if(ch[i] == 'D')
			count--;
		if(count == 0 && ch[i] == 'D')
			montanhas++;
		}
	return montanhas;
}

int main(void){
	char ch[] = "SSDSDDSDDDSS";
	int m;
	m = contar_montanhas(ch);
	printf("%d montanhas\n", m);
	return 0;
}return 0;
}
