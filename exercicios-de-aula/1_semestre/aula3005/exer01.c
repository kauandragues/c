#include <stdio.h>
/*
Exercicio da aula de Algoritmo e Lógica de Programação
Realizado por: Kauã de Andrade Rodrigues
/05/2025

Faça um programa que conte o número de palavras
*/
int main(){
	char string[79];
	int passar = 0;
	int tam_string;
	char string_inversa[79];
	scanf("%s",string);
	
	for (int i = 0; string[i] != '\0'; i++){
		tam_string++;
	}
	string_inversa[tam_string] = '\0';
	for (int i = tam_string-2; i >= 0; i--){
		string_inversa[passar] = string[i];
		passar++;
	}
	
	printf("%s", string_inversa);
	
	
	return 0;
}