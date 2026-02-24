#include <stdio.h>
/*
Autor do exercício: Luis Damas
Resolvido por: github/kauandragues
15/05/2025

Escreva um programa que indique quantos segundos tem um determinado número de horas
*/
int main(){

	int horas; 
	long int segundos;
	
	printf("Digite o numero de horas: ");
	scanf("%ld", &horas);
	segundos = horas <= 0 ? 0 : horas * 3600L;
	
	printf("O numero de segundos eh %ld", segundos);
	
	return 0;
}