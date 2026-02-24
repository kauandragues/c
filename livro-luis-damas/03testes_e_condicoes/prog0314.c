#include <stdio.h>
/*
Autor do exercício: Luis Damas
Resolvido por: github/kauandragues
14/05/2025

Escreva um programa que calcule o imposto pago por mulheres e homens, sabendo que as mulheres
pagam 10% de impostos e que os homens pagam 15%
*/
int main(){
	char genero;
	float salario;
	printf("Bem-vindo ao programa que calcula seu imposto a ser pago no salario");
	
	printf("\nDigite a inicial do seu genero (M para masculino e F para feminino: ");
	scanf(" %c", &genero);
	
	printf("\nDigite seu salario: ");
	scanf("%f", &salario);
	
	switch (genero){
		case 'F':
		case 'f':
			salario -= salario * 0.1;
			break;
		case 'M':
		case 'm':
			salario -= salario * 0.15;
			break;
	}
	
	printf("O seu salario eh R$%.2f", salario);
	
	return 0;
}