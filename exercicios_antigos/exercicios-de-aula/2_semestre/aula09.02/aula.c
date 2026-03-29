#include <stdio.h>

void troca(int vet[], int i, int j){
	int aux;
	aux = vet[i];
	vet[i] = vet[j];
	vet[j] = aux;
}

int main(){
	int v[] = {1,2,3,4};
	troca(v, 0, 3);
	
	for(int i = 0; i < 4; i++){
		printf("%d ",v[i]);
	}
	
	int v1 = 10, v2 = 20;
	int aux;
	
	printf("\n----%d----%d----",v1,v2);
	
	aux = v1;
	v1 = v2;
	v2 = aux;
	
	printf("\n----%d----%d----",v1,v2);
	
	int vetor[] = {30,23,16,72,2};
	int ini;
	int indice_menor = ini = 0;
	for(int i = ini+1; i < 5; i++){
		if( vetor[indice_menor] > vetor[i]){
			 indice_menor = i;
		}
	}
	
	printf("%d",vetor[indice_menor]);
	return 0;
}