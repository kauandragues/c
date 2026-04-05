#include <stdio.h>

int main(){
	int vetor1[4] = {5,1,3,1};
	int vetor2[3] = {3,5,1};
	int iguais = 1;
	
	for(int i = 0; i < 4; i++){
		int existe = 0;
		for(int j = 0; j < 3; j++){
			if(vetor1[i] == vetor2[j]){
				existe++;
				break;
			}
		}
		if(existe == 0){
			iguais = 0;
			break;
		}
	}
	if(iguais == 0){
		printf("Eles nao sao iguais");
	}else{
		printf("Eles sao iguais");
	}
	return 0;
}