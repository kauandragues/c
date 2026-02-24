#include <stdio.h>

main(){
	short int idade;
	int montante;
	long int conta;
	
	printf("Digite sua idade: ");
	scanf("%d",&idade);
	
	printf("\nDigite sua conta: ");
	scanf("%d",&conta);
	
	printf("\nDigite o montante que deseja depositar: ");
	scanf("%d",&montante);
	
	printf("\nVoce tem %d anos, depositou R$%d,00 na conta %d",idade,montante,conta);
}