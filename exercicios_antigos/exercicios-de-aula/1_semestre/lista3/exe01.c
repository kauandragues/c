#include <stdio.h>
/*
Autor: Alexandre Ferreira
Resolvido por: github/kauandragues

Lista 3 - Exercício 1
Escreva um programa que leia um vetor de até 50 números reais e calcule a média destes
valores
*/
int main(){
	int tamanho_vetor;
	scanf(" %d", &tamanho_vetor);
	
	float vetor[tamanho_vetor], soma, media;
	for(int i = 0; i < tamanho_vetor; i++){
		scanf(" %f",&vetor[i]);
		soma += vetor[i];
	}
	media = soma / tamanho_vetor;
	printf("\nA media dos valores do vetor eh: %.2f",media);
	return 0;
}