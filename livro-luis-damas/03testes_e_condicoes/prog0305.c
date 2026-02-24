#include <stdio.h>
/*
Autor do exercício: Luis Damas
Resolvido por: github/kauandragues
13/05/2025

Escreva um programa que leia dois numeros e os apresente por odem crescente
*/
int main(){
	int a,b;
	printf("Digite dois numeros inteiros: ");
	scanf("%d %d", &a, &b);
	
	if(a <= b)
		printf("\nEm ordem crescente: %d, %d", a, b);
	else
		printf("\nEm ordem crescente: %d, %d", b, a);
	return 0;
}