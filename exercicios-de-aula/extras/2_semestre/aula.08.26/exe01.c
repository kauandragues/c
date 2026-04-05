#include <stdio.h>

struct Registro{
	int campo1[3];
	int campo2;
};

struct Registro ler_campo1();
struct Registro somar_no_campo2(struct Registro regis);
void imprimir_valores_registro(struct Registro regis);

int main(){
	struct Registro regis;
	
	regis = ler_campo1();
	regis = somar_no_campo2(regis);
	imprimir_valores_registro(regis);
	return 0;
}

struct Registro ler_campo1(){
	struct Registro regis;
	
	for(int i = 0; i < 3; i++){
		printf("\nDigite o valor para o campo1[%d]:",i);
		scanf("%d", &regis.campo1[i]);
	}
	
	return regis;
}

struct Registro somar_no_campo2(struct Registro regis){
	int soma = 0;
	
	for(int i = 0; i < 3; i++){
		soma = soma + regis.campo1[i];
	}
	
	regis.campo2 = soma;
	
	return regis;
}

void imprimir_valores_registro(struct Registro regis){
	printf("\nCampo1 do registro:");
	for(int i = 0 ; i < 3; i++){
		printf("\nCampo1[%d] = %d", i, regis.campo1[i]);
	}
	printf("\nCampo2 do registro: %d", regis.campo2);
}