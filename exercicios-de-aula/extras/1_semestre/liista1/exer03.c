#include <stdio.h>
#include <math.h>

int main(){
	float x, resultado;
	scanf("%f",&x);
	resultado = sqrt(x) + (x/2) + pow(2,x);
	printf("%f",resultado);
	return 0;
}