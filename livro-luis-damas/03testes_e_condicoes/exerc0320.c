#include <stdio.h>
/*
Autor do exercício: Luis Damas
Resolvido por: github/kauandragues

02/06/2025

Escreva um programa que leia uma data e verifique se esta é valida ou não.
*/
int main(){
	int dia, mes, ano;
	printf("Digite uma data: (dia/mes/ano) ");
	scanf("%d/%d/%d", &dia, &mes, &ano);
	
	//não podem ser negativos (dia e mes)
	//meses entre 1 e 12
	//dias entre 1 e 31, 30, 29 ou 28
	
	switch(mes){
		case 2:
			if(ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0){
				if(dia <= 29 && dia >= 1)
					printf("Data Valida!");
				else
					printf("Data Invalida!");
			}else{
				if(dia <= 28 && dia >= 1)
					printf("Data Valida!");
				else
					printf("Data Invalida!");
			}
			break;
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			if(dia <= 31 && dia >= 1)
				printf("Data Valida!");
			else
				printf("Data Invalida!");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			if(dia <= 30 && dia >= 1)
				printf("Data Valida!");
			else
				printf("Data Invalida!");
			break;
		default:
			printf("Data Invalida!");
	}
	return 0;
}