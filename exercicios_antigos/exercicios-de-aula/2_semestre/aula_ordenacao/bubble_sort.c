#include <stdio.h>

int main(){
	int vetor [] = {5,2,3,4};
	
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4-1-i; j++){
			if(vetor[j] > vetor[j+1]){
				vetor[j] = vetor[j] + vetor[j+1];
				vetor[j+1] = vetor[j] - vetor[j+1];
				vetor[j] = vetor[j] - vetor[j+1];
			}
		}
	}
	for(int i = 0; i < 4; i++){
		printf("\n%d",vetor[i]);
	}
	
	return 0;
}