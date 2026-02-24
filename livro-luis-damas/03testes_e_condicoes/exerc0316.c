/*
Autor do exercício: Luis Damas
Resolvido por: github/kauandragues

02/06/2025

Escreva um programa, de quatro formas dintintas, que leia um inteiro e indique se esse número
é ou não igual a zero
*/

#include <stdio.h>

int main(){
	int num;
	char resposta;
	printf("Digite um numero: ");
	scanf("%d",&num);
	
	if(num == 0)
		printf("\nIF1 - O numero digitado eh 0");
	else
		printf("\nIF1 - O numero digitado nao eh 0");
		
	printf("\nEXP - O numero digitado eh zero? (S) para sim e (N) para nao: %c",resposta = num == 0 ? 'S' : 'N');
	
	switch (num){
		case 0:
			printf("\nSWITCH - O numero digitado eh 0");
			break;
		default:
			printf("\nSWITCH - O numero digitado nao eh 0");
	}
	
	if(num)
		printf("\nIF2 - O numero nao eh 0");
	else
		printf("\nIF2 - O numero eh 0");
	
	return 0;
	
}