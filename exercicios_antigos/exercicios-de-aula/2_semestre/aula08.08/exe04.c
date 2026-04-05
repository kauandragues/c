#include <stdio.h>
/*
Aluno:github/kauandragues

Sequência de Fibonacci
*/
int main(){
	int a = 0, b = 1;
	int qtd_sequencia;
	scanf("%d",&qtd_sequencia);
	
	//0, 1, 1, 2, 3, 5, 8, 13, 21...
	
	for(int i = 0; i < qtd_sequencia; i++){
		printf("%d\n",a);
		b = a + b;
		a = b - a;
	}
	
	return 0;
}