/*
Autor: Alexandre Ferreira
Resolvido por: github/kauandragues

Lista 3 - Exercício 2
Escreva um programa que leia um vetor de até 50 números reais e calcule o desvio padrão
destes valores. O desvio padrão é dado pela seguinte equação:
Onde n é a quantidade de números, xi é o i-ésimo valor e x é a média dos valores.
*/

#include <stdio.h>
#include <math.h>

int main(){
	int qtd_numeros = 0;
	float vetor[50], media = 0.0, soma = 0.0, desvio_padrao = 0.0, somatorio = 0.0;
	
	scanf(" %d", &qtd_numeros);
	
	for(int i = 0; i < qtd_numeros; i++){
		scanf(" %f",&vetor[i]);
		soma += vetor[i];
	}
	media = soma / qtd_numeros;
	
	for(int i = 0; i < qtd_numeros; i++){
		somatorio += pow(vetor[i]-media,2);
	}
	desvio_padrao = sqrt((1/(float)(qtd_numeros-1))*somatorio);
	printf("O desvio padrao dos valores do vetor eh %.3f",desvio_padrao);
	return 0;
}