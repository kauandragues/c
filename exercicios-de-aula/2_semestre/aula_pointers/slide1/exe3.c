#include <stdio.h>

int main(){
	int b;
	int *c;
	
	b = 10;
	c = &b; //importante indidicar para qual variavel o ponteiro está apontando
	*c = 13;
	
	printf("\n%d\n",b);
	return 0;
}