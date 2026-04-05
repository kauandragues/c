#include <stdio.h>

int potencia(int base, int expoente);
void impressao(int vet[], int i);

int main(){
	int vetor[] = {1,2,3,4,5,6,7};
	int i = 6;
	impressao(vetor, i);
	printf("%d",potencia(3,0));
	return 0;
}

void impressao(int vet[], int i){	
	if(i < 0)
		return;
	impressao(vet, i-1);
	printf("%d \n",vet[i]);
}

int potencia(int base, int expoente){
	if(expoente == 0){
		return 1;
	}
	return base * potencia(base, expoente - 1);
}	

