#include <stdio.h>

int main(){
	double b,a;
	double *c;
	
	b = 10.89;
	c = &b;
	a = *c;
	
	printf("%lf\n",a);
	
	return 0;
}