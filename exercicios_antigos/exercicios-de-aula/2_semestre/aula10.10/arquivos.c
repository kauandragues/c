#include <stdio.h>

int main(){
	FILE *arquivo = fopen("teste.txt", "r");
	if(arquivo == NULL){
		printf("Erro!");
	}
	
	char vetor[256];
	while(fscanf(arquivo, '%c', &vetor) != EOF)
		printf("%s", vetor);
	fclose(arquivo);
	return 0;
}