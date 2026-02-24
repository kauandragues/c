#include <stdio.h>

int main(){
	char opcao;
	float temperatura;
	scanf("%c",&opcao);
	if(opcao == 'F'){
		scanf("%f",&temperatura);
		printf("Voce digitou em Fahrenheit, sua temperatura em Celsius eh: %f", (temperatura-32)*(5.0/9.0));
	}else if(opcao == 'C'){
		scanf("%f",&temperatura);
		printf("Voce digitou em Celsius, sua temperatura em Fahrenheit eh: %.2f", (temperatura/(5.0/9.0)) + 32);
	}else{
		printf("opcao invalida");
	}
	return 0;
}