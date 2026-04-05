#include <stdio.h>

int main(){
	int vetor[] = {1,2,3,4,5,6};
	int *ponteiro = vetor;
	
	for(int i = 0; i < 6; i++){
		printf("%d\n",ponteiro[i]);
	}
	
	return 0;
}