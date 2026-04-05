#include <stdio.h>

double pot(double a, int b);
double exercicio1();
double exercicio2();

int main(){
	exercicio1();
	exercicio2();
	return 0;
}

double pot(double a, int b){
	double resultado = 1;
	
	for (int i = 1; i <= b; i++){
		resultado *= a;
		printf("%.2lf ^ %d = %.2lf\n", a,i,resultado);
	}
	printf("\n");
}

double exercicio1(){
	double a, resultado;
	int b;
	
	scanf("%lf",&a);
	scanf("%d",&b);

	resultado = pot(a,b);
	return 0;
}

double exercicio2(){
	for(int i = 2; i <= 10; i++){
		pot(i,10);
	}
	return 0;
}