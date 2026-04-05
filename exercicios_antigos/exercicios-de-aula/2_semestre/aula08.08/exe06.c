#include <stdio.h>
/*
Aluno: github/kauandragues

Somar os dígitos de um número (ex: 123 → 1+2+3 = 6)
*/
int main(){
	int a, b = 0;
	scanf("%d", &a);

	while(a != 0){
		b = b + (a % 10);
		a = a / 10;
	}
	
	printf("\n%d", b);
	return 0;
}