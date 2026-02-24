#include <stdio.h>
/*
Autor do exercício: Luis Damas
Resolvido por: github/kauandragues
14/05/2025

Escreva um programa que calcule o Salário Bruto, Salário Líquido e o Imposto a pagar seguindo
a seguinte regra:
	-Salário < 1000 tem 5% de taxa
	-Salário >= 1000 e < 5000 tem 11% de taxa
	-Salário >= 5000 tem 35% de taxa
*/
int main(){
	float salario_bruto, salario_liquido, imposto = 0;
	
	printf("Bem-vindo ao programa que calcula seu Salario Bruto, Liquido e o Imposto a pagar!");
	printf("\nDigite seu salario: ");
	scanf("%f",&salario_bruto);
	
	//verifica qual taxa sera aplicada no salario
	if(salario_bruto < 1000){
		imposto = salario_bruto * 0.05;
	}else if(salario_bruto < 5000){
		imposto = salario_bruto * 0.11;
	}else{
		imposto = salario_bruto * 0.35;
	}
	
	salario_liquido = salario_bruto - imposto;
	
	printf("\nO salario bruto eh: R$%.2f\nO imposto a pagar eh: R$%.2f\nO salario liquido eh: R$%.2f",
	salario_bruto,imposto,salario_liquido);

	return 0;
}