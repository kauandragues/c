/*
Autor: Alexandre Ferreira
Resolvido por: github/kauandragues

Lista 3 - Exercício 4
Dadas duas sequências de n e m valores inteiros, onde n <= m, escreva um programa que
verifica quantas vezes a primeira sequência ocorre na segunda.

Exemplo:
primeira sequência: 1 0 1
segunda sequência: 1 1 0 1 0 1 0 0 1 1 0 1 0
Resultado: 3
*/
#include <stdio.h>

int main(){
	int tam_seq1, tam_seq2, qtd_achada = 0;
	scanf(" %d %d",&tam_seq1,&tam_seq2);
	
	int sequencia1[tam_seq1];
	int sequencia2[tam_seq2];
	
	for(int i = 0; i < tam_seq1; i++){scanf(" %d",&sequencia1[i]);}
	for(int i = 0; i < tam_seq2; i++){scanf(" %d",&sequencia2[i]);}
	
	for(int i = 0; i <= tam_seq2 - tam_seq1; i++){
		if(sequencia1[0]==sequencia2[i]){
			int k, j, fim = i+tam_seq1, achou = 1;
			for(j = i, k = 0; j < fim; j++, k++){
				if(sequencia1[k] != sequencia2[j]){
					achou = 0;
					break;
				}
			}
			if(achou == 1)
				qtd_achada++;
		}	
	}
	
	printf("\nA quantidade de vezes que a primeira sequencia ocorre na segunda eh %d", qtd_achada);
	return 0;
}

