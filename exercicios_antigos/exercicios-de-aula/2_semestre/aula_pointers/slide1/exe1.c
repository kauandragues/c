#include <stdio.h>

int main(){
	int b;
	int *c;
	
	b = 10;
	c = &b;
	*c = 11;
	
	printf("\n%d\n",b);
	//altera o valor da variavel que o ponteiro aponta
	return 0;
}