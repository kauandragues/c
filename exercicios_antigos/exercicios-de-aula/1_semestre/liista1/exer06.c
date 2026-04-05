#include <stdio.h>
#include <locale.h>
/*A solução abaixo está correta para classificar um número como par e menor que 100, ou
par e maior ou igual a 100, etc, como no exemplo visto em aula?

Não, pois o else de */

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a;
	printf("Digite um número inteiro:");
	scanf("%d", &a);
	if( ( a % 2 == 0) && (a<100) )
		/*ENTRA APENAS SE PAR E MENOR QUE 100*/
		printf("O número é par e menor que 100\n");
	else if( a>=100 )
		/*ENTRA APENAS SE IMPAR OU PAR E MAIOR QUE 100*/
		printf("O número é par e maior ou igual a 100\n");
	if( ( a % 2 != 0) && (a<100) )
		/*ENTRA APENAS SE IMPAR OU E MENOR QUE 100*/
		printf("O número é ímpar e menor que 100\n");
	else if (a>=100)
		/*ENTRA APENAS SE IMPAR OU PAR E MAIOR QUE 100*/
		printf("O número é ímpar e maior que 100\n");
	
	getchar();
}