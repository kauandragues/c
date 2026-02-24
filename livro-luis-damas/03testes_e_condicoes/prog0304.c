#include <stdio.h>
/*
Autor do exercício: Luis Damas
Resolvido por: github/kauandragues
13/05/2025

Implemente um programa que adicione R$1000,00 ao salário de um indivíduo, caso este seja inferior
a R$100.000,00
*/
int main(){
	float salario;
	printf("Digite seu salario: R$");
	scanf("%f",&salario);
	
	if(salario < 100000.00)
		salario += 1000.00;
	
	printf("O seu salairo eh de: R$%.2f",salario);

	return 0;
}