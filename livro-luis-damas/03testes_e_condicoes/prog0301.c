#include <stdio.h>
/*
Autor do exercício: Luis Damas
Resolvido por: github/kauandragues
13/05/2025

Implemente um programa que solicite ao utilizador dois inteiros e, em seguida, aplique 
todos os operadores de C aos inteiros lidos
*/
int main(){
	int a, b;
	printf("\nDigite dois numeros: ");
	scanf("%d %d", &a, &b);
	
	printf("\n%d == %d, %d",a,b,a==b);
	printf("\n%d < %d, %d",a,b,a<b);
	printf("\n%d > %d, %d",a,b,a>b);
	printf("\n%d <= %d, %d",a,b,a<=b);
	printf("\n%d >= %d, %d",a,b,a>=b);
	printf("\n%d != %d, %d",a,b,a!=b);
	
	return 0;
}