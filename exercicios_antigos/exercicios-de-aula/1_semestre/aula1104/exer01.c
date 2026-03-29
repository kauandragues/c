#include <stdio.h>

/*
int main(){
	int n, atual = 1, anterior1 = 1, anterior2 = 0;
	scanf("%d",&n);
	printf("\n1");
	for(int i = 1; i <= n;i++){ 
		printf("\n%d",atual);
		atual = anterior1 + anterior2;
		anterior2 = anterior1;
		anterior1 = atual;
	}
	return 0;
}*/

int main(){
	int n, atual = 0, anterior = 1;
	scanf("%d",&n);
	for(int i = 1; i <= n;i++){
		printf("\n%d",atual + anterior);
		atual = anterior + atual;
		anterior = atual - anterior;
	}
}