#include <stdio.h>

int main(){
	int *ponteiro_int;
	int teste_int = 10;
	
	float *ponteiro_float;
	int teste_float = 25.6;
	
	ponteiro_int = &teste_int;
	//operador * acessa o conteudo da variavel que o ponteiro aponta
	printf("%d",ponteiro_int);
	
	return 0;
}