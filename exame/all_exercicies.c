#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#define pi 3.14159
#define FALSE 0
#define TRUE 1
#define MAX 100
#define MAX2 10
#define MAX3 1000
#define N 20

//1.3 e 1.6
/*
int main(void){
	float l, w, h, v;

	printf("L:"); scanf("%f", &l);
	printf("W:"); scanf("%f", &w);
	printf("H:"); scanf("%f", &h);

	v = l*w*h;

	printf("O volume é %f\n", v);
}
*/

//2.3, 2.4, 2.8, 2.9
/*
float e3(int r){
	return ((4 * pi * r* r * r)/3);
}

float e4(float v){
	return (v*1.23);
}

float e8(float x){
	return (3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x + 7*x - 6);
}

float e9(float x){
	return (((((3*x + 2)*x - 5)*x - 1)*x + 7)*x - 6);
}

int main(void){

	float x;
	float result;

	printf("Inicio\n");

	scanf("%f", &x);
	result = e9(x);      //trocar para o exercicio pretendido
	printf("O resultado é %f\n", result);

	printf("Fim\n");
	return 0;
}
*/

//2.5
/*
int main(void){
	int valor, n20, n10, n5, m1;

	printf("Valor a pagar: ");
	scanf("%d", &valor);

	n20 = valor / 20;
	n10 = (valor % 20) / 10;
	n5 = ((valor % 20) % 10) / 5;
	m1 = ((valor % 20) % 10) % 5;

	printf("O valor a pagar divide-se em\nnotas de €20: %d\nnotas de €10: %d\nnotas de €5: %d\nmoedas de €1: %d\n", n20, n10, n5, m1);
}
*/

//2.6
/*
int main (void){
	int a, b, c, d;

	printf("Primeiro numerador: "); scanf("%d", &a);
	printf("Primeiro denominador: "); scanf("%d", &b);
	printf("Segundo numerador: "); scanf("%d", &c);
	printf("Segundo denominador: "); scanf("%d", &d);

	printf("%d/%d + %d/%d = %d/%d.\n", a, b, c, d, a*d + c*b, b*d);
}
*/

//2.7
/*
int main(void){
	int a, b, c, maior;

	scanf("%d %d %d", &a, &b, &c);

	if(a > b && a > c)
		maior = a;
	else if(b > a && b > c)
		maior = b;
	else
		maior = c;

	printf("%d\n", maior);
}
*/

//3.3
/*
if(age >= 13 && age <= 19)
	teenager = 1;
else
	teenager = 0;
*/

//3.4
/*
int main(void){
	int a, b, c;

	printf("Primeiro lado: "); scanf("%d", &a);
	printf("Segundo lado: "); scanf("%d", &b);
	printf("Terceiro lado: "); scanf("%d", &c);

	if(a == b && b == c)
		printf("Triângulo equilátero\n");

	else if((a == b && b != c) || (a == c && c != b) || (b == c && c != a))
		printf("Triângul isósceles\n");

	else if(a != b && b != c)
		printf("Triângulo escaleno\n");
}
*/

//3.5
/*
int main(void){
	int a, b, c, max, min, amp;

	scanf("%d %d %d", &a, &b, &c);

	if(a > b && a > c)
		max = a;
	else if(b > a && b > c)
		max = b;
	else
		max = c;

	if(a < b && a < c)
		min = a;
	else if(b < a && b < c)
		min = b;
	else
		min = c;

	amp = max - min;

	printf("O valor máximo é %d, o valor míninmo é %d e a amplitude é %d.\n", max, min, amp);
}
*/

//3.6
/*
int main(void){
	int v1, v2, v3, count = 0;

	printf("Primeiro valor: "); scanf("%d", &v1);
	printf("Segundo valor: "); scanf("%d", &v2);
	printf("Terceiro valor: "); scanf("%d", &v3);

	if(v1 != v2)
		count++;
	if(v1 != v3)
		count++;
	if(v2 != v3)
		count++;
	if((v1 == v2) && (v2 == v3))
		count++;

	printf("Existem %d numeros distintos\n", count);
}
*/

//3.7 e 3.8
/*
int mediana(int a, int b, int c){
	int t;

	while(!((a <= b) && (b <= c))){
		if(a > b){
			t = a;
			a = b;
			b = t;
		}

		if(b > c){
			t = b;
			b = c;
			c = a;
		}
	}
	return b;
}

int main(void){
	int a, b, c;

	printf("Primeiro valor: ");
	scanf("%d", &a);
	printf("Segundo valor: ");
	scanf("%d", &b);
	printf("Terceiro valor: ");
	scanf("%d", &c);

	printf("A mediana é %d\n", mediana(a, b, c));
}
*/

//3.9
/*
int potencia(int x, int n){
	int res = 1;
	for(int i = 1; i <= n && n > 0; i++){
		res *= x;
	}

	return res;
}
*/

//4.2
/*
int main(void){
	float valor, comissao;

	while(valor != 0){

		printf("Introduza o valor €: ");
		scanf("%f", &valor);

		if(valor < 2500.0)
			comissao = 30.0 + 0.017 * valor;
		else if(valor < 6250.0)
			comissao = 56.0 + 0.0066 * valor;
		else if(valor < 20e3)
			comissao = 76.0 + 0.0034 * valor;
		else if(valor < 50e3)
			comissao = 100.0 + 0.0022 * valor;
		else if(valor < 500e3)
			comissao = 155.0 + 0.0011 * valor;
		else
			comissao = 255.0 + 0.0009 * valor;

		if(comissao < 39.0)
			comissao = 39.0;

	printf("Comissao: € %.2f\n", comissao);

	}
}
*/

//4.3
/*
int main(void){
	int valor, max = 0;

	while(valor != 0){
		scanf("%d", &valor);
		if(valor > max)
			max = valor;
	}

	printf("O valor máximo é %d\n", max);
}
*/

//4.4
/*
int main(void){
	int count = 0;
	float soma, val;

	while(val != 0){
		scanf("%f", & val);
		soma += val;
		count++;
	}

	printf("A media aritmetica é %f\n", soma/(count-1));
}
*/

//4.5
/*
int soma_divisores(int n){
	int soma = 0;
	for(int i = 1; i <= (n/2); i++){
		if(n%i == 0)
			soma += i;
	}
	return soma;
}

int main(void){
	int val;

	scanf("%d", &val);
	printf("%d\n", soma_divisores(val));
}
*/

//4.6 e 4.7
/*
int prox_bissexto(int n){
	while(!((n%4 == 0 && n%100 != 0) || n%400 == 0))
		n++;
	return n;
}
*/

//4.8
/*
int main(void){
	int dec, bin = 0, x10 = 1, tmp;

	printf("Numero a convereter: ");
	scanf("%d", &dec);

	while(dec != 0){
		tmp = dec % 2;
		dec /= 2;
		bin += tmp * x10;
		x10 *= 10;
	}

	printf("%d\n", bin);
}
*/

//4.9
/*
int mdc(int a, int b){

	while(a != b){
		if(a > b){
			a = a - b;
		}
		if(b > a){
			b = b - a;
		}
	}

	return a;
}

int main(void){
	int a, b;
	printf("Numerador: "); scanf("%d", &a);
	printf("Denominador: "); scanf("%d", &b);

	printf("A fracao %d/%d é equivalente a %d/%d\n", a, b, a/(mdc(a,b)), b/(mdc(a,b)));

}
*/

//4.10
/*
double aprox_raiz(double a, int n){
	double x0, xn, xn1;

	x0 = a/2;
	xn = (x0 + (a/x0)) * 0.5;

	for(int i = 0; i <= n ; i++){
		xn1 = (xn + (a/xn)) * 0.5;
		xn = xn1;
	}

	return xn1;
}

int main(void){
	double x;
	printf("Raiz de x a aproximar: ");
	scanf("%lf", &x);

	printf("É aproxiamdo a %.10lf\n", aprox_raiz(x,10));
}
*/

//4.11
/*
int main(void){
	int val;

	printf("Qual o valor a fatorizar: ");
	scanf("%d", & val);

	if(val <= 0)
		printf("O numero nao é positivo");

	else if(val == 1)
		printf("1: 1");

	else{
		printf("%d: ", val);

		for(int i = 2; i <= val; i++){
			while(val%i == 0){
				val /= i;
				printf("%d  ", i);
			}
		}
	}
	printf("\n");
}
*/

//5.1
/*
int primo(int n){

	if(n <= 1)
		return FALSE;

	for(int d = 2; d*d <= n; d++){
		if(n%d == 0)
			return FALSE;
	}

	return TRUE;
}

int main(void){
	int lim;

	printf("Limite superior: ");
	scanf("%d", & lim);

	for(int i = 2; i <= lim; i++){
		if(primo(i))
			printf("%d   ", i);
	}

	printf("\n");
}
*/

//5.2
/*
int calc_diff(int a, int b){
	if(a > b)
		return a - b;
	return b - a;
}

int main(void){
	int a, b, iter = 1, t;

	printf("Cálculo do mdc(a, b):\n");
	printf("a = "); scanf("%d", &a);
	printf("b = "); scanf("%d", &b);

	printf("mdc(%d,%d)", a, b);

	do{
		if(a > b)
			a = calc_diff(a, b);
		else
			b = calc_diff(a, b);

		printf(" = mdc(%d,%d)", a, b);

		iter++;
	} while(b != a);

	printf(" = %d\n%d iterações\n", a, iter);
}
*/

//5.5
/*
int main(void){
	int count = 0;
	char c;

	while((c = getchar()) != '\n'){
		if(isalpha(c))
			count++;
	}

	printf("A frase contém %d caracteres\n", count);
}
*/

//5.6
/*
int main(void){
	char ch, last;
	last = getchar();

	printf("%c", last);

	while((ch = getchar()) != EOF){
		if(last == ' ')
			printf("%c", toupper(ch));
		else
			printf("%c", ch);
		last = ch;
	}
	return 0;
}
*/

//5.7
/*
int scrabble(char ch){
	int pontos = 0;

	ch = toupper(ch);

	switch(ch){
		case 'D':
		case 'G': return 2;

		case 'B':
		case 'C':
		case 'M':
		case 'P': return 3;

		case 'F':
		case 'H':
		case 'V':
		case 'W':
		case 'Y': return 4;

		case 'K': return 5;

		case 'J':
		case 'X': return 8;

		case 'Q':
		case 'Z': return 10;

		default: return 1;
	}
}

int main(void){
	char ch;
	int pontos = 0;

	while((ch = getchar()) != '\n'){
		pontos += scrabble(ch);
	}
	printf("%d\n", pontos);
}
*/

//----------         OU         ----------

/*
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
*/

//5.8
/*
double serie_log(double x, int n){
	double total = x, soma_interna, potencias = x;

	for(int count = 2; count <= n; count++){
		potencias *= x;
		soma_interna = potencias/count;

		if(count % 2 == 0)
			soma_interna *= -1;

		total += soma_interna;
	}

	return total;
}

int main(void){
	int n;
	double x;

	printf("log(1 + x):\nQual o x? ");
	scanf("%lf", &x);
	printf("Com aproximação a n iterações: ");
	scanf("%d", &n);

	printf("\nlog(1 + %lf) = %lf\n", x, serie_log(x, n));
	return 0;
}
*/

//5.9
/*
double aprox_pi(int n){
	double soma = 0, divisao;
	int num = -1, denom;

	for(int i = 0; i < n; i++){
		num *= -1;
		denom = (2*i) + 1;

		divisao = (double)num / (double)denom;
		soma += divisao;
	}
	return 4 * soma;
}


int main(void){
	int n_aprox;
	double result;

	printf("Numero de termos da serie: ");
	scanf("%d", &n_aprox);

	result = aprox_pi(n_aprox);

	printf("\nNúmero de pi calculado: %.10lf\nNúmero de pi da libraria: %.10lf\n", result, M_PI);
}
*/


/*---------------------------Até aqui matéria para o primeiro teste---------------------------*/


//6.1

//inteiro - ambos os extremos devem ser incluídos
/*
double getRand(){
	int d;
	d = (0 + rand() / (RAND_MAX / (9 - 0 + 1) + 1));
	return d;
}
*/

//double - o extremo superior não deve ser incluído
/*
double getRand(){
	double d;
	d = (0.0 + (double)rand() / ((double)RAND_MAX / (1.0 - 0.0 ) + 1.0));
	return d;
}
*/

/*
int main(void){
	double val = 0, r;
	srand((unsigned)time(NULL));
	for(int i = 0; i < MAX; i++){
		r = getRand();
		val += r;
		printf("%lf\n", r);
	}
	printf("Media: %lf\n", val);
}
*/

//6.2
/*
double getRand(){
	int d;
	d = (1 + rand() / (RAND_MAX / (9 - 1 + 1) + 1));
	return d;
}

int main(void){
	int certas = 0, erradas = 0;
	srand((unsigned)time(NULL));

	for(int i = 0; i < MAX2; i++){
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
*/

//6.3
/*
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
*/

//6.4
/*
void inicializa(int vec[], int size, int val){
	for(int i = 0; i < size, i++)
		vec[i] = val;
}
*/

//6.5
/*
int ocorre(int vec[], int size, int val){
	for(int i = 0; i < size; i++){
		if(vec[i] == val)
			return 1;
	}
	return 0;
}
*/

//6.6
/*
int ocorre(int vec[], int size, int val){
	for(int i = 0; i < size; i++){
		if(vec[i] == val)
			return 1;
	}
	return 0;
}

int main(void){
	int vec[100];
	int val, i = 0;

	scanf("%d", &val);                	//ler repeetidamente
	while(val != -1){					//testar repetidamente
		if((ocorre(vec, i, val)) == 0){
			vec[i] = val;
			i++;
		}
		scanf("%d", &val);
	}
	printf("Vetor: ");					//apresentar resultado
	for(int j = 0; j < i; j++)
		printf("%d ", vec[j]);
	printf("\n");
}
*/

//6.7
/*
void contar_letras(char str[], int size){
	int Alpha_contador[26];
	char Alpha[26];
	for(int i = 0; i < 26; i++){       //A = 65 e Z = 90
		Alpha[i] = 65 + i;             //preenchar Alpha de A a Z
	}

	for(int letra = 0; letra < 26; letra++){       //cada letra em Alpha
		int n = 0;                     //contar as vezes que aparece
		for(int j = 0; j < size; j++){             //para cada letra da string
			if(Alpha[letra] == str[j]){
				n++;
			}
		}
		Alpha_contador[letra] = n;
	}

	for(int i = 0; i < 26; i++){
		if(i % 5 == 0)
			printf("\n");
		printf("%c: %d\t", Alpha[i], Alpha_contador[i]);
	}
	printf("\n");
}

int main(void){
	char texto[MAX];
	int c = 0;

	while((texto[c] = toupper(getchar())) != EOF){      //termina com ctrl+D
		c++;
	}

	contar_letras(texto, c-1);

	return 0;
}
*/

//6.8
/*
int repetidos(int vec[],int size){
	for(int i = 0; i < size; i++){
		for(int j = i+1; j < size; j++){
			if(vec[i] == vec[j])
				return 1;
		}
	}
	return 0;
}

int main(void){
	int val_lido[MAX], i = 0;

	printf("Indique os valores(termina em 0 ou max de 100 val): ");
	scanf("%d", &val_lido[i]);

	while(val_lido[i] && i < MAX){
		i++;
		scanf("%d", &val_lido[i]);
	}

	if(repetidos(val_lido, i)){
		printf("Existem valores repetidos\n");
	}
	else{
		printf("Não existem valores repetidos\n");
	}
}
*/

//6.9

//nao vou fazer

//7.1
/*
void capitalizar(char str[]){
	int i = 0;
	while(str[i]){
		str[i] = toupper(str[i]);
		i++;
	}
}

int main(void){
	int i = 0;
	char texto[] = {'0','l','a','\0'};      //tesxto teste
	capitalizar(texto);

	while(texto[i]){
		printf("%c", texto[i]);
		i++;
	}
	printf("\n");
}
*/

//7.2
/*
int palindromo(char str[]){
	int j = strlen(str) - 1;

	for(int i = 0; i < j; i++){
		if(toupper(str[i]) != toupper(str[j]))
			return FALSE;
		j--;
	}
	return TRUE;
}

int main(void){
	char texto[] = {'A','n','A','A','\0'};
	int flag = palindromo(texto);

	if(flag)
		printf("É\n");
	else
		printf("Não é\n");
}
*/

//7.3
/*
int todos_letras(char str[]){
	int dim = strlen(str);

	for(int i = 0; i < dim; i++){
		if(!isalpha(str[i]))
			return 0;
	}

	return 1;
}

int main(void){
	char texto[] = {'T','e','s','t','e','\0'};

	if(todos_letras(texto))
		printf("Tudo letra\n");
	else
		printf("Não é tudo letra\n");
}
*/

//7.4
/*
int algum_digito(char str[]){
	int dim = strlen(str);

	for(int i = 0; i < dim; i++){
		if(isdigit(str[i]))
			return 1;
	}
	return 0;
}

int main(void){
	char texto[] = {'1','t','s','t','e','\0'};

	if(algum_digito(texto))
		printf("Tem números\n");
	else
		printf("Não tem números\n");
}
*/

//7.5
/*
int forte(char str[]){
	int maiusc = 0, minusc = 0, alg = 0, dim = strlen(str);

	if(dim < 6)
		return 0;

	for(int i = 0; i < dim; i++){
		if(islower(str[i]))
			minusc++;
		if(isupper(str[i]))
			maiusc++;
		if(isdigit(str[i]))
			alg++;

		if(minusc > 0 && maiusc > 0 && alg > 0)
			return TRUE;
	}

	return FALSE;
}

//para testar

int main(void)
{
  char pass[64];
  int dim;
  char rnd;

  srand((unsigned)time(NULL));

  dim = 1 + (rand() / (RAND_MAX / 64));

  for (int i = 0; i < dim; ++i)
  {
    do //ascii entre [0-9A-Za-z]
    {
     rnd = '0' + (rand() / (RAND_MAX / ('z' - '0') + 1));
    } while (!((rnd >= '0' && rnd <= '9') || (rnd >= 'A' && rnd <= 'Z') || (rnd >= 'a' && rnd <= 'z'))); //remover carateres extra entre [0-z]

    pass[i] = rnd;
  }

  pass[dim] = '\0';

  printf("A pass \"");
  for (int i = 0; i < dim; ++i)
    {
      putchar(pass[i]);
    }
  if(forte(pass))
    printf("\" e forte.\n");
  else
    printf("\" e fraca.\n");

  return 0;
}
*/

//7.6
/*
int decimal(char str[]){
	int dim = strlen(str);
	int numero = 0, x10 = 1;

	for(int i = dim-1; i >= 0; i--){
		int n = str[i] - '0';
		numero += n * x10;
		x10 *= 10;
	}

	return numero;
}

int main(void){
	printf("%d\n", decimal("0"));
}
*/

//7.7
/*
int calc(char str[]){
	int a = str[0] - '0';
	int b = str[2] - '0';

	switch(str[1]){
		case '+': return a+b;
		case '-': return a-b;
		case '*': return a*b;
	}
}

int main(void){
	char conta[3];
	srand((unsigned)time(NULL));
	int rnd;

	for(int i = 0; i < N; i++){
		conta[0] = (rand()/(RAND_MAX / 10)) + '0';
		conta[2] = (rand()/(RAND_MAX / 10)) + '0';

		rnd = rand() / (RAND_MAX / 3);

		if(rnd == 0)
			conta[1] = '+';
		else if(rnd == 1)
			conta[1] = '-';
		else
			conta[1] = '*';

		printf("%c%c%c = %d\n", conta[0], conta[1], conta[2], calc(conta));
	}
}
*/

//7.8
/*
int scrabble(char str[]){
	int dim = strlen(str);
	int pontos = 0;
	char c;

	for(int i = 0; i < dim; i++){
		c = str[i];
		switch(c){
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
	return pontos;
}

int main(void){
	char palavra[] = "PITFALL";
	printf("%s, vale %d pontos\n", palavra, scrabble(palavra));
}
*/

//7.9
/*
int contar_maiores(int vec[], int size, int val){
	int count = 0;

	for(int i = 0; i < size; i++){
		if(vec[i] > val)
			count++;
	}

	return count;
}

int main(void){
	int numeros[] = {0,1,2,3,4,5,6,7,8,9,'\0'};
	int dim = 10;
	int ref = 5;
	printf("Foram encontrados %d numeros maiores do que %d\n", contar_maiores(numeros, dim, ref), ref);
}
*/

//7.10
/*
int filtrar_positivos(int vec[], int size){
	int  i, k = 0;
	//i: indice do proximo valor
	//k: numero de positivos

	for(i = 0; i < size; i++){
		int val = vec[i];
		if(val > 0)
			vec[k++] = val;     //novo valor positivo
	}

	return k;
}

int main(void){
	int numeros[] = {1,3,2,-1,-2,4,-3,5,'\0'};
	int dim = 8;
	int positivos;

	positivos = filtrar_positivos(numeros, dim);
	printf("\n");

	for(int i = 0; i < positivos; i++){
		printf("%d ", numeros[i]);
	}
	printf("\n");
}
*/

//8.2
/*
int ordenada(int vec[], int size){
	for(int i = 0; i < size - 1; i++){
		if(vec[i] > vec[i+1])
			return 0;
	}
	return 1;
}
*/

//8.3
/*
int desordem(int vec[], int size){
	int count = 0;

	for(int i = 0; i < size - 1; i++){
		if(vec[i] > vec[i+1])
			count++;
	}
	return count;
}

int main(){
	int a[] = {3,1,2,2,4,0,'\0'};
	printf("O número de números desordenados nesta sequência é %d\n",desordem(a,6));
}
*/

//8.5 - select sort por ordem decrescente
/*
void select_sort(int vec[], int n){
	for(int i = 0; i < n; i++){
		int imax = i;         //indice inicial do máximo
		for(int j = i+1; j < n; j++){
			if(vec[j] > vec[imax])
				imax = j;
		}

		if(imax != i){       //trocar o max com vec[i]
			int tmp = vec[i];
			vec[i] = vec[imax];
			vec[imax] = tmp;
		}
	}
}

int main(void){
	int vec[] = {5,4,79,6,1,5,7,89,4,5,'\0'};
	int size = 10;

	select_sort(vec, size);

	for(int i = 0; i < size; i++){
		printf("%d  ", vec[i]);
	}
	printf("\n");
}
*/

//8.6
/*
void select_sort(int vec[], int n){
	for(int i = 0; i < n; i++){
		int imax = i;
		for(int j = i+1; j < n; j++){
			if(vec[j] > vec[imax])
				imax = j;
		}

		if(imax != i){
			int tmp = vec[i];
			vec[i] = vec[imax];
			vec[imax] = tmp;
		}
	}
}

int segundo_menor(int vec[], int n){
	select_sort(vec, n);
	return vec[n-2];
}

int main(void){
	int vec[] = {5,4,79,6,1,5,7,89,4,5,'\0'};
	int size = 10;

	printf("%d\n", segundo_menor(vec, size));
}
*/

//8.7
/*
void inserir(char str[], char ch){
	int i = strlen(str) - 1;

	while(i >= 0 && str[i] > ch){
		str[i+1] = str[i];
		i--;
	}
	str[i+1] = ch;
}

//a função funciona, mas o main não
*/

//9.1
/*
void ordenar(char vec[], int n){  //insert sort
	int i, j;

	for(i = 1; i < n; i++){
		int x = vec[i];
		j = i-1;
		while(j >= 0 && vec[j] > x){
			vec[j+1] = vec[j];
			j--;
		}
		vec[j+1] = x;
	}
}

int main(void){
	char c[] = "caralhos";
	int l = strlen(c);

	ordenar(c, l);

	for(int i = 0; i < l; i++){
		printf("%c",c[i]);
	}
	printf("\n");
}
*/

//9.2
/*
void ordenar(char vec[], int n){    //insert sort
	int i, j;

	for(i = 1; i < n; i++){
		int x = vec[i];
		j = i-1;
		while(j >= 0 && vec[j] > x){
			vec[j+1] = vec[j];
			j--;
		}
		vec[j+1] = x;
	}
}

int anagramas(char str1[], char str2[]){
	int dim1 = strlen(str1), dim2 = strlen(str2);

	ordenar(str1, dim1);
	ordenar(str2, dim2);

	if(dim1 != dim2)
		return 0;

	for(int i = 0; i < dim1; i++){
		if(str1[i] != str2[i])
			return 0;
	}
	return 1;
}

int main(void){
	char str1[] = "deposit";
	char str2[] = "topside";

	int r = anagramas(str1, str2);

	if(r == 1)
		printf("São anagramas\n");
	else
		printf("Não são anagramas\n");
	return 0;
}
*/

//9.3
/*
void neutralizar(char *str){
	for(int i =0; str[i] != '\0'; i++){
		if(isalpha(str[i])){
			if(isupper(str[i])){
				tolower(str[i]);
			}
		}
		else{
			for(int b=i; str[b] != '\0'; b++)
				str[b] = str[b+1];
		}
	}
}

void ordenar(char *str){
	int min,pos;
	for(int i=0; str[i] != '\0'; i++){
		pos = i;
		min = str[i];
		for (int k = i+1; str[k] != '\0';k++){
			if (str[k] < min){
				min = str[k];
				pos = k;
			} 
		}
		if(pos != i){
			str[pos] = str[i];
			str[i] = min;
		}
	}
}

int anagramas(char str1[], char str2[]){
	int size1 = strlen(str1);
	int size2 = strlen(str2);
	if (size1 != size2)
		return 0;

	neutralizar(str1);
	neutralizar(str2);
	ordenar(str1);
	ordenar(str2);
	for (int i = 0; i < size1; i++)
		if(str1[i] != str2[i]){
			return 0;
		}
	return 1;

}

int main(){
	char str1[] = "wh3at is lif!e";
	char str2[] = "life wh?at i1s";
	int r = anagramas(str1, str2);
	if(r == 1)
		printf("São anagramas\n");
	else
		printf("Não são anagramas\n");
}
*/

//9.4
/*
int mediana(int a, int b, int c){
	int t;

	while(!((a <= b) && (b <= c))){
		if(a > b){
			t = a;
			a = b;
			b = t;
		}

		if(b > c){
			t = b;
			b = c;
			c = a;
		}
	}
	return b;
}

int partition(int vec[], int l, int u){
	int m, temp, j;
	m = l;
	int p = mediana(vec[l], vec[u], ((vec[l] + vec[u]) / 2));

	if(p == vec[l])
		j = l;
	else if(p == vec[u])
		j = u;
	else if(p == ((vec[l] + vec[u]) / 2))
		j = ((l + u) / 2);

	temp = vec[l];
	vec[l] = vec[j];
	vec[j] = temp;

	for(int i = l + 1; i <= u; i++){
		if(vec[i] < vec[l]){
			m++;
			temp = vec[i];
			vec[i] = vec[m];
			vec[m] = temp;
		}
	}

	temp = vec[l];
	vec[l] = vec[m];
	vec[m] = temp;

	return m;
}

void quicksort_rec(int vec[], int l, int u){
	int m;

	if(l >= u)
		return;

	m = partition(vec, l, u);
	quicksort_rec(vec, l, m-1);
	quicksort_rec(vec, m+1, u);
}

int main(void){
	int vec[] = {5,2,4,9,1};

	quicksort_rec(vec, 0, 4);

	for(int i = 0; i <= 4; i++){
		printf("vec[%d] = %d", i, vec[i]);
	}
	printf("\n");
}
*/

//9.5
/*
int magico(int a[20][20], int n){
	int parse_sum, sum = 0;

	for(int i = 0; i < n; i++){ 	//verificar 1ª linha
		sum += a[0][i];
	}

	for(int i = 1; i < n; i++){ 	//soma linha a linha
		parse_sum = 0;
		for(int j = 0; j < n; j++){
			parse_sum += a[i][j];
		}

		if(parse_sum != sum)
			return 0;
	}

	for(int i = 0; i < n; i++){ 	//soma coluna a coluna
		parse_sum = 0;
		for(int j = 0; j < n; j++){
			parse_sum += a[j][i];
		}

		if(parse_sum != sum)
			return 0;
	}

	parse_sum = 0;

	for(int i = 0; i < n; i++){ 	//soma diagonal principal
		parse_sum += a[i][i];
	}

	if(parse_sum != sum)
		return 0;

	parse_sum = 0;
	for(int i = 0; i < n; i++){ 	//soma diagonal secundaria{
		parse_sum += a[i][(n-1)-i];
	}

	if(parse_sum != sum)
		return 0;
	return 1; 				//passou todos testes, logo e quadrado magico
}

int main(void){
	int cubo[] = {{2,9,4},{7,5,3},{6,1,8}};
	int n = 3;
	if(!magico(cubo, n))
		printf("nao ");
	printf("e cubo magico!\n");
}
*/

//10.2
/*
a) V
b) F
c) V
d) F
e) V
f) 
g) V
h) F
i) F
*/

//10.3
/*
void decompor(int total_seg, int *horas, int *mins, int *segs){
	*horas = total_seg / 3600;      //60min*60segs
	*mins = (total_seg - (*horas * 3600)) / 60;
	*segs = total_seg - (*horas * 3600) - (*mins * 60);
}

int main(void){
	int horas, minutos, segundos;
	int totseg = 45000;

	decompor(totseg, &horas, &minutos, &segundos);

	printf("%ds = %dh:%dm:%ds\n", totseg, horas, minutos, segundos);
}
*/

//10.4
/*
void max_min(int vec[], int size, int *pmax, int *pmin){
	*pmax = vec[0];
	*pmin = vec[0];

	for(int i = 0; i < size; i++){
		if(*pmax < vec[i])
			*pmax = vec[i];

		if(*pmin > vec[i])
			*pmin = vec[i];
	}
}

int main(void){
	int max, min;
	int vec[] = {1,8,5,6,9,2};

	max_min(vec, 6, &max, &min);

	printf("O valor maximo é %d e o mínimo é %d\n", max, min);

	return 0;
}
*/

//10.5
/*
int mdc(int a, int b){

	while(a != b){
		if(a > b)
			a = a - b;
		else if(b > a)
			b = b -a;
	}
	return a;
}

void reduzir(int *pnum, int *pdenom){
	int m = mdc(*pnum, *pdenom);

	*pnum = *pnum / m;
	*pdenom = *pdenom / m;
}

int main(void){
	int a, b;

	printf("Numerador ");
	scanf("%d", &a);
	printf("Denominador ");
	scanf("%d", &b);

	reduzir(&a, &b);

	printf("A fração reduzida fica %d/%d\n", a, b);
}
*/

//10.6
/*
void store_zeros(int *vec){
	while(*vec != '\0'){
		*vec = 0;
		*vec++;
	}
}

int main(void){
	int a[5] = {1};

	store_zeros(a);

	for(int i = 0; i < 5; i++)
		printf("a[%d]=%d\n",i,a[i]);
}
*/

//10.7
/*
int contar_espacos(char *str){
	int espacos = 0;

	while (*str != '\0'){
		if(*str == ' ')
			espacos++;
		*str++;
	}

	return espacos;
}

int main(){
	char a[6] = "a b 1";

	printf("O número de espaços é %d\n",contar_espacos(a));
}
*/

//10.8
/*
void inverter(char *str){
	int j = strlen(str) - 1;
	char *x = str + j;
	char t;

	while(str < x){
		t = *str;
		*str = *x;
		*x = t;
		x--;
		str++;
	}
}

int main(void){
	char text[1000];
	fgets(text, 1000, stdin); 		// ler
	puts(text); 					// imprimir original
	inverter(text); 				// inverter
	puts(text); 					// imprimir invertido
}
*/

//10.9
/*
char *procurar(char *str, char ch){
	while(*str != '\0'){
		if(*str == ch)
			return str;
		str++;
	}
	return NULL;
}

//so para testar

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

//10.10
/*
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
*/

//teste - ex1

/*
long fatorial(int n){
	long f = 1;
	for(int i = 1; i <= n; i++)
		f *= i;
	return f;
}

long binomial(int n, int k){
	long num, denom;

	num = fatorial(n);
	denom = fatorial(k) * fatorial(n - k);

	return num/denom;
}
*/
