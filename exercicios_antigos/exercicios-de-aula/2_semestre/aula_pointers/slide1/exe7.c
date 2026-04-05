#include <stdio.h>

void nao_troca(int x, int y);
void troca(int *a, int *b);

int main(){
	int x = 4, y = 5;
	nao_troca(x, y);
	
	int a = 1, b = 2;
	troca(&a, &b);
	
	printf("%d, %d\n",x,y);
	printf("%d, %d\n",a,b);
	return 0;
}

void nao_troca(int x, int y){
	int aux;
	aux = x;
	x = y;
	y = aux;
}

void troca(int *a, int *b){
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
}