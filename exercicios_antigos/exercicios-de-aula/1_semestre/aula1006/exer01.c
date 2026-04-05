#include <stdio.h>

int soma(int comeco, int fim, int incremento); //protótipo da função ou assinatura da função

int contador(int comeco, int fim, int incremento){
	if(comeco >= fim)
		return comeco;
	comeco = comeco + incremento;
	comeco = contador(comeco,incremento,fim);
}

int main(){
	int comeco = 0;
	int fim = 10;
	int incremento = 1;
	printf("%d",contador(comeco,fim,incremento));
	return 0;
}