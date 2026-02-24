#include <stdio.h>
/*
Autor do exercício: Luis Damas
Resolvido por: github/kauandragues
14/05/2025

Implemente um programa que, dada uma letra, indique qual o estado civil de uma pessoa
*/
int main(){
	char estado_civil;
	printf("Bem-vindo ao programa que dados a letra inicial do estado civil retornamos qual ele eh");
	printf("\nDigite a letra inicial: ");
	scanf(" %c", &estado_civil);
	
	if(estado_civil == 's' || estado_civil == 'S')
		printf("O seu estado civil eh Solteiro");
	else if(estado_civil == 'c' || estado_civil == 'C')
		printf("O seu estado civil eh Casado");
	else if(estado_civil == 'v' || estado_civil == 'V')
		printf("O seu estado civil eh Viuvo");
	else if(estado_civil == 'd' || estado_civil == 'D')
		printf("O seu estado civil eh Divorciado");
	else
		printf("Letra invalida");
	return 0;
}