#include <stdio.h>
/*
Aluno: github/kauandragues

Fatorial de um número.
*/
int main(){
	int a;
	scanf("%d",&a);
	
	for(int i = a-1; i >= 2; i--){
		a = a * i;
	}
	
	printf("%d",a);
	return 0;
}