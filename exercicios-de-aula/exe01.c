#include <stdio.h>
/*
Exercicio da auka de Algoritmo e Lógica de Programação
Realizado por: Kauã de Andrade Rodrigues
19/05/2025

Escreva um programa leia uma matriz do teclado e ent˜ao imprime os
elementos com menor e maior frequˆencia de ocorrˆencia na matriz
*/


int main(){
	int num_linhas, num_colunas, maior_freq, menor_freq;
	int matriz_freq[2][100] = {0};
	
	printf("Digite o numero de linhas e colunas da matriz: ");
	scanf("%d %d",&num_linhas, &num_colunas);
	
	//pegar a matriz que digitarem de finin
	int matriz[num_linhas][num_colunas];
	printf("\nDigite os valores da matriz:\n");
	for(int i = 0; i < num_linhas; i++){
		for(int j = 0; j < num_colunas; j++){
			scanf(" %d", &matriz[i][j]);
		}
	}

	for(int i = 0; i < num_linhas; i++){
		for(int j = 0; j < num_colunas; j++){
			
			int num = matriz[i][j];
			//verifica se o num existe na matriz de frequencia
			for(int k = 0; k < 100; k++){
				if(num == matriz_freq[0][k]){
					matriz_freq[1][k]++;
					break;
				}
				//se chegar no final da matriz adiciona a porra do numero
				if(matriz_freq[1][k] == 0){
					matriz_freq[0][k] = num;
					matriz_freq[1][k] = 1;
					break;
				}
			}
		}
	}
	//ate que enfim pegar a maior e menor frequencia :D
	for(int j = 0; j < 100; j++){
		if(matriz_freq[1][j] == 0)
			break;
		
		if(maior_freq <= matriz_freq[1][j])
			maior_freq = matriz_freq[1][j];
		
		if (menor_freq > matriz_freq[1][j])
			menor_freq = matriz_freq[1][j];
	}
	
	//Graças a Deus Imprimir!!!
	for(int i = 0; i < 100; i++){
		if(matriz_freq[1][i] == 0)
			break;
		if(maior_freq == matriz_freq[1][i])
			printf("MAIOR FREQUENCIA: O numero %d aparece %d vezes", matriz_freq[0][i],matriz_freq[1][i]);
		if(menor_freq == matriz_freq[1][i])
			printf("\nMENOR FREQUENCIA: O numero %d aparece %d vezes", matriz_freq[0][i], matriz_freq[1][i]);
	}
	return 0;
}