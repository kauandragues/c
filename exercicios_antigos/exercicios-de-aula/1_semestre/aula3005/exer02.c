#include <stdio.h>
/*
Exercicio da aula de Algoritmo e Lógica de Programação
Realizado por: Kauã de Andrade Rodrigues
/05/2025

Faça um programa que conte o número de palavras
*/
int main(){
	char string[80];
	int num_palavras = 0;
	int tamanho_string;
	fgets(string, 80, stdin);
	for(int i = 0; i <= 80; i++){
		if(string[i] == '\n'){
			string[i] = '\0';
			tamanho_string = i;
			break;
		}
	}
	
	for (int i = 0; i <= tamanho_string-1; i++){
		if(string[i] != ' ' && (string[i+1] == ' ' || string[i+1] == '\0'))
			num_palavras++;
	}
	
	printf("O numero de palavras eh %d",num_palavras);
	return 0;
}