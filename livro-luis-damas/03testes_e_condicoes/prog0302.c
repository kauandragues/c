#include <stdio.h>
/*
Autor do exercício: Luis Damas
Resolvido por: github/kauandragues
13/05/2025

Implemente um programa que indique se um numero é positivo (>=0) ou negativo
*/
int main(){
	int numero;
	printf("Digite um numero: ");
	scanf("%d",&numero);
	
	if(numero >= 0)
		printf("\nO numero eh positivo!");
	else 
		printf("\nO numero eh negativo!");

	return 0;
}