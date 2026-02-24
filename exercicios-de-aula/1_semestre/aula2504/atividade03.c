#include <stdio.h>

int main(){
	int vetor1 [5], vetor2 [5], somatorio = 0;
	
	for(int i = 0; i < 5; i++){
		int num_usuario;
		printf("\nvetor1[%d] = ",i);
		scanf("%d",&num_usuario);
		vetor1[i] = num_usuario;
	}
	
	for(int i = 0; i < 5; i++){
		int num_usuario;
		printf("\nvetor2[%d] = ",i);
		scanf("%d",&num_usuario);
		vetor2[i] = num_usuario;
	}
	
	for(int i = 0; i < 5; i++){
		somatorio += vetor1[i] * vetor2[i];
	}
	
	printf("\n\nProduto interno = %d",somatorio);
	return 0;
}