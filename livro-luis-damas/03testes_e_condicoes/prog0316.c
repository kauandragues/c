#include <stdio.h>
/*
Autor do exercício: Luis Damas
Resolvido por: github/kauandragues
14/05/2025

Escreva um programa que leia ma operação binária entre dois inteiros e apresente em seguida o 
resultado desse operação sobre os dois inteiros
*/
int main(){
	int num1, num2, resultado;
	char operacao;
	printf("Bem-vindo a sua calculadora!!");
	printf("\nDigite um operação com dois inteiros: ");
	scanf("%d %c %d", &num1, &operacao, &num2); 
	
	switch (operacao){
		case '+':
			resultado = num1 + num2;
			break;
		case '-':
			resultado = num1 - num2;
			break;
		case '/':
		case ':':
			resultado = num1 / num2;
			break;
		case 'x':
		case 'X':
		case '*':
			resultado = num1 * num2;
			break;
		default:
			printf("Operação invalida!");
			return 0;
	}
	
	printf("O resultado da operacao eh %d", resultado);
	return 0;
}