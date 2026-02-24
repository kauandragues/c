#include <stdio.h>
/*
Autor do exercício: Luis Damas
Resolvido por: github/kauandragues

02/06/2025

Escreva um programa que indique o número de dias em um mês 
*/
int main(){
	int mes;
	printf("Digite o numero do mes: ");
	scanf("%d", &mes);
	
	switch(mes){
		case 1:
			printf("O mes 1 tem 31 dias");
			break;
		case 2:
			printf("O mes 2 tem 28 dias");
			break;
		case 3:
			printf("O mes 3 tem 31 dias");
			break;
		case 4:
			printf("O mes 4 tem 30 dias");
			break;
		case 5:
			printf("O mes 5 tem 31 dias");
			break;
		case 6:
			printf("O mes 6 tem 30 dias");
			break;
		case 7:
			printf("O mes 7 tem 31 dias");
			break;
		case 8:
			printf("O mes 8 tem 31 dias");
			break;
		case 9:
			printf("O mes 9 tem 30 dias");
			break;
		case 10:
			printf("O mes 10 tem 31 dias");
			break;
		case 11:
			printf("O mes 11 tem 30 dias");
			break;
		case 12:
			printf("O mes 12 tem 31 dias");
			break;
	}
	
	return 0;
}