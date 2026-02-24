#include <stdio.h>
/*
Autor do exercício: Luis Damas
Resolvido por: github/kauandragues
14/05/2025

Escreva um programa que solicite ao utilizador um salário e mostre o importo a pagar
	-Se o salário for negativo ou zero mostre o como "Salário Invalido"
	-Se o salário for maior que 1000, paga 10% de imposto, se não paga apenas 5%
*/

int main(){
	float salario;
	printf("Digite o seu salario: ");
	scanf("%f",&salario);
	
	if(salario <= 0)
		printf("Salario Invalido!");
	else if(salario < 1000)
		printf("O imposto a pagar eh: %.2f",salario*0.05);
	else
		printf("O imposto a pagar eh: %.2f", salario*0.1);	
	return 0;
}