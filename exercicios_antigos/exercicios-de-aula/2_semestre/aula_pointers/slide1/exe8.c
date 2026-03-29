#include <stdio.h>

void encontrar_maior_e_menor(int vetor[], int tamanho, int *maior, int *menor);

int main(){
	int vetor[] = {1,2,3,4,5,6,7};
	int maior = vetor[0];
	int tamanho = 7;
	int menor = vetor[0];
	
	encontrar_maior_e_menor(vetor, tamanho, &maior, &menor);
	
	printf("%d, %d",maior, menor);
	return 0;
}

void encontrar_maior_e_menor(int vetor[], int tamanho, int *maior, int *menor){
	
	for(int i = 0; i < tamanho; i++){
		if(*maior < vetor[i]){
			*maior = vetor[i];
		}
		if(*menor > vetor[i]){
			*menor = vetor[i];
		}
	}
}