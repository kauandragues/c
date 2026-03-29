#include <stdio.h>

int main(){
	int num, q=1;
	int *p;
	
	num = 100;
	p = &num;
	q = *p;
	
	printf("%d",q);
	//recebe o valor da variavel que o ponteiro aponta
	return 0;
}