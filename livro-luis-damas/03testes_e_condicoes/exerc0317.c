#include <stdio.h>
/*
Autor do exercício: Luis Damas
Resolvido por: github/kauandragues

02/06/2025

Escreva um programa que verifique se um ano é bissexto ou não.
*/
int main(){
	int ano;
	printf("\nDigite um ano para saber se eh bissexto: ");
	scanf("%d",&ano);
	
	if((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0)
		printf("O ano eh bissexto");
	else
		printf("O ano nao eh bissexto");
	return 0;
}