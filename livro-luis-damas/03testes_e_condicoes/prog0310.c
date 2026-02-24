#include <stdio.h>
/*
Autor do exercício: Luis Damas
Resolvido por: github/kauandragues
14/05/2025

Utilize o operador ? para resolver esse problema:
Implemente um programa que calcule os aumentos de ordenado para o corrente ano. 
Se o ordenado for > 1000 deve ser aumentado 5%, se não deve ser aumentado 7%
*/

int main(){
	float salario;
	printf("Bem-vindo ao programa que calcula o seu novo salario");
	printf("\nDigite o seu salario atual: ");
	scanf("%f",&salario);
	
	salario *= salario < 1000 ? 1.07 : 1.05;
	//salario = salario < 1000 ? salario * 1.07 : salario * 1.05;
	
	printf("O seu novo salario eh R$%.2f", salario);
	return 0;
}