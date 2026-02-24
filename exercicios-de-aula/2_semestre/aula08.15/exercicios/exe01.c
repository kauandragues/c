#include <stdio.h>

/*
Funções atômicas

*/
int calcular_area(int base, int altura);

int ler_inteiro(char mensagem []);

int main(){
	int base, altura, area;
	
	base = ler_inteiro("Digite a base:");
	altura = ler_inteiro("Digite a altura:");
	
	area = calcular_area(base, altura);
	
	printf("\nArea = %d\n",area);
	
	return 0;
}

int calcular_area(int base, int altura){
	return base * altura;
}

int ler_inteiro(char mensagem []){
	int num;
	
	printf(mensagem);
	scanf("%d",&num);
	
	return num;
}

