#include <stdio.h>
#include <ctype.h>
/*
Autor do exercício: Luis Damas
Resolvido por: github/kauandragues

15/05/2025

Escreva um programa que indique quantas segundos, minutos e décimos de segundos
tem um determinado número de horas
*/
int main(){
	
	char opcao;
	int horas, conversao;
	
	printf("Bem-vindo ao programa que converte uma quantidade de horas");
	printf("\nDigite o numero de horas: ");
	scanf("%d",&horas);
	
	printf("\nAs opcao de conversao sao minutos(m), segundos(s) e decimos de segundos(d)");
	printf("\nDigite a opcao: ");
	scanf(" %c",&opcao);
	opcao = toupper(opcao);
	conversao = horas;
	
	switch (opcao){
		case 'D':
			 conversao *= conversao < 0 ? 0 : 10;
		case 'S':
			conversao *= conversao < 0 ? 0 : 60;
		case 'M':
			conversao *= conversao < 0 ? 0 : 60;
		default:
			printf("A conversao sera %d", conversao);
	}
		
	return 0;
}