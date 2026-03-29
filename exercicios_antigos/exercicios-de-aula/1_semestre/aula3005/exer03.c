#include <stdio.h>
/*
Exercicio da aula de Algoritmo e Lógica de Programação
Realizado por: Kauã de Andrade Rodrigues
/05/2025

Faça um progr
*/
int main(){
	char string[150];
	char palavra[15];
	int posição_palavras[150];
	int existe_palavra = 0;
	int tamanho_palavra;
	int tamanho_string;
	fgets(string, 150, stdin);
	fgets(palavra,15, stdin);
	
	for(int i = 0; i <= 150; i++){
		if(string[i] == '\n'){
			string[i] = '\0';
			tamanho_string = i;
			break;
		}
	}
	
	for(int i = 0; i <= 150; i++){
		if(palavra[i] == '\n'){
			palavra[i] = '\0';
			tamanho_palavra = i;
			break;
		}
	}
	
	for(int i = 0; i < 150; i++){
		posição_palavras[i] = -1;
	}
	
	
	for (int i = 0; i <= tamanho_string-1; i++){
		if(palavra[0] == string[i]){
			int encontrou = 1;
			for(int j = 0; j <= tamanho_palavra-1; j++){
				if(palavra[j]!=string[j+i]){
					encontrou = 0;
					break;
				}
			}
			if(encontrou == 1){
				for(int a = 0; a < 150; a++){
					if(posição_palavras[a] != -1)
						continue;
					else{
						existe_palavra++;
						posição_palavras[a] = i;
						break;
					}
				}
			}
			
		}
	}
	if(existe_palavra!=0){
		for(int i = 0; posição_palavras[i] != -1; i++){
			printf("\nNa posicao: %d",posição_palavras[i]);
		}
	}else{
		printf("Essa palavra nao foi encontrada!");
	}
	return 0;
}