#include <stdio.h>

int main(){
	int vetor[] = {30,23,16,72,2};
	int min;
	int aux;
	
	for(int i = 0; i < 5; i++){
		min = i;
		for(int j = i+1; j <5; j++){
			if(vetor[min] > vetor[j]){
				min = j;
			}
		if (i == min){
			continue;
		}
		aux = vetor[i];
		vetor[i] = vetor[min];
		vetor[min] = aux;
		}
	}
	
	for(int i = 0; i < 5; i++){
		printf("%d ",vetor[i]);
	}
	
	getchar();
	return 0;
}