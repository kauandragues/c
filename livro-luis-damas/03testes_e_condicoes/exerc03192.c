#include <stdio.h>
/*
Autor do exercício: Luis Damas
Resolvido por: github/kauandragues

02/06/2025

Escreva um programa que indique o número de dias em um mês 
*/
int main(){
	int mes, dias = 31;
	printf("Digite o numero do mes: ");
	scanf("%d",&mes);
	
	switch(mes){
		case 2:
			dias = dias - 2;
		case 1:
		case 4:
		case 6:
		case 9:
		case 11:
			dias = dias - 1;
	}
	
	printf("O mes %d tem %d dias",mes, dias);
	return 0;
}