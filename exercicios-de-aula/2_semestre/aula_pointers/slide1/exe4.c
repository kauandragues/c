#include <stdio.h>

int main(){
	int b, a;
	int *c;
	
	b = 10;
	c = &a;
	*c = 11;
	a = b * (*c);
	printf("\n%d",a);
	printf("\n%d",b);
	printf("\n%d",*c);
	return 0;
}