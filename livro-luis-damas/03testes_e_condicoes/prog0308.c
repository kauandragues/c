#include <stdio.h>
/*
Autor do exercício: Luis Damas
Resolvido por: github/kauandragues
14/05/2025

Escreva um programa que aplique uma taxa de imposto de 10% aos solteiros e de 9% aos casados
*/

int main(){
	char estado_civil;
	float salario;
	
	printf("Bem-vindo ao programa que calcula a seu salario liquido");
	printf("\nDigite seu salario: ");
	scanf("%f",&salario);
	printf("\nDigite seu estado civil (use c ou C para casado e s ou S para solteiro): ");
	/*precisa do <espaço> antes do %c pra que ele não pegue o <enter>, que o usuario digitou
	depois do primeiro scanf, como o input desse scanf*/
	//esse <espaco> fala pra ignorar os "espaços em branco" que vem depois do input
	scanf(" %c",&estado_civil);
	
	//verifica qual eh o estado civil e aplica a taxa ao salario
	if(estado_civil == 'c' || estado_civil == 'C')
		salario -= salario * 0.1;
	else if(estado_civil == 's' || estado_civil == 'S')
		salario -= salario *0.09;
	
	printf("\nSeu salario liquido sera de R$%.2f", salario);
	return 0;
}