#include <stdio.h>
#include <stdlib.h>

void ler_vetores(int n, double *v1, double *v2);
double * soma_vet(int n, double *v1, double *v2);

int main(){
	double *soma_vetores, *v1, *v2;
	int n;
	
	printf("Digite a dimensao do vetor:");
	scanf("%d",&n);
	if(n<1){
		printf("\nDigite um número maior que 0!");
		return;
	}
	ler_vetores(n, v1, v2);
	soma_vetores = soma_vet(n,v1,v2);
	
	printf("Soma dos vetores:\n");
	for(int i = 0; i < n; i++){
		printf("%.2lf ",soma_vetores[i]);
	}
	free(soma_vetores);
	free(v1);
	free(v2);
	
	return 0;
}

void ler_vetores(int n, double *v1, double *v2){
	v1 = malloc(n* sizeof(double));
	v2 = malloc(n* sizeof(double));
	
	printf("Primeiro vetor:\n");
	for(int i = 0; i < n; i++){
		printf("elemento [%d]\n",i);
		scanf("%lf", &v1[i]);
	}
	
	printf("Segundo vetor:\n");
	for(int i = 0; i < n; i++){
		printf("elemento [%d]\n",i);
		scanf("%lf", &v2[i]);
	}
}

double * soma_vet(int n, double *v1, double *v2){
	double *soma_vetores = malloc(n* sizeof(double));
	
	for(int i = 0; i < n; i++){
		soma_vetores[i] = v1[i] + v2[i];
	}

	return soma_vetores;
}