#include <stdio.h>

int main(){
	unsigned short int ano, mes, dia;
	
	printf("Bem-Vindo ao programa que formata uma data!!\n");
	printf("\nQual eh o ano?\n");
	scanf("%hd",&ano);
	
	printf("\nQual eh o mes?\n");
	scanf("%hd", &mes);
	
	printf("\nQual eh o dia?\n");
	scanf("%hd",&dia);
	
	printf("\nA data eh: %hd/%hd/%hd",dia, mes,ano);
	return 0;
}