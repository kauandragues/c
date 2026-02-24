#include <stdio.h>
/*
Autor do exercício: Luis Damas
Resolvido por: github/kauandragues
14/05/2025

Utilize switch case para resolver o seguinte problema:
Implemente um programa que, dada uma letra, indique qual o estado civil de uma pessoa
*/
int main(){
	char estado_civil;
	printf("Bem-vindo ao programa que dados a letra inicial do estado civil retornamos qual ele eh");
	printf("\nDigite a letra inicial: ");
	scanf(" %c", &estado_civil);
	
	switch(estado_civil){
		case 'c':
			printf("O seu estado civil eh Casado");
			break;
		case 'C':
			printf("O seu estado civil eh Casado");
			break;
		case 's':
			printf("O seu estado civil eh Solteiro");
			break;
		case 'S':
			printf("O seu estado civil eh Solteiro");
			break;
		case 'd':
			printf("O seu estado civil eh Divorciado");
			break;
		case 'D':
			printf("O seu estado civil eh Divorciado");
			break;
		case 'v':
			printf("O seu estado civil eh Viuvo");
			break;
		case 'V':
			printf("O seu estado civil eh Viuvo");
			break;
		default:
			printf("Entrada Invalida!");
	}
	return 0;
}