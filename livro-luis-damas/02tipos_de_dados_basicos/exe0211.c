#include <stdio.h>

int main(){
	unsigned short int ano, mes, dia;
	
	printf("Bem-Vindo ao programa que formata a sua data!!\n");
	printf("Digite a sua data em forma aaaa-mm-dd\n");
	
	scanf("%hd-%hd-%hd",&ano,&mes,&dia);
	
	printf("\nA sua data eh: %hd/%hd/%hd",dia,mes,ano);
	return 0;
}