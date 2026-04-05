#include <stdio.h>

int main(){
	double *a = NULL, *b = NULL, c = 5;
	a = &c;
	
	if(a != NULL){
		b = a;
		printf("%d\n",&a);
		printf("%d\n",&b);
		printf("%lf\n",*b);
		//5
	}
	
}