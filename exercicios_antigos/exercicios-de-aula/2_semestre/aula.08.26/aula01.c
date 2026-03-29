#include <stdio.h>

struct Coordenadas{
	float x;
	float y;
	
};

struct Coordenadas ler_coordenada(int indice);
void imprimir_ponto(struct Coordenadas ponto, int indice);
struct Coordenadas somar_2_pontos(struct Coordenadas ponto1, struct Coordenadas ponto2);
struct Coordenadas subtracao_2_pontos(struct Coordenadas ponto1, struct Coordenadas ponto2);
struct Coordenadas divisao_2_pontos(struct Coordenadas ponto1, struct Coordenadas ponto2);
struct Coordenadas multiplicacao_por_escalar(struct Coordenadas ponto1, float escalar);


int main(){
	struct Coordenadas ponto[5];
	ponto[0] = ler_coordenada(0);
	ponto[1] = ler_coordenada(1);
	
	ponto[2] = somar_2_pontos(ponto[0], ponto[1]);
	ponto[3] = subtracao_2_pontos(ponto[0], ponto[1]);
	ponto[4] = divisao_2_pontos(ponto[0], ponto[1]);
	ponto[5] = multiplicacao_por_escalar(ponto[0], 5);
	
	imprimir_ponto(ponto[0], 0);
	imprimir_ponto(ponto[1], 1);
	imprimir_ponto(ponto[2], 2);
	imprimir_ponto(ponto[3], 3);
	imprimir_ponto(ponto[4], 4);
	imprimir_ponto(ponto[5], 5);
	
	return 0;
}

struct Coordenadas ler_coordenada(int indice){
	struct Coordenadas coordenada;
	
	printf("\nCoordenada de indice: %d",indice);
	printf("\nDigite o x da coordenada:");
	scanf("%f",&coordenada.x);
	
	printf("\nDigite o y da coordenada:");
	scanf("%f",&coordenada.y);
	
	return coordenada;
}

void imprimir_ponto(struct Coordenadas ponto, int indice){
	printf("\nPonto de indice: %d", indice);
	printf("\nA coordenada x: %.2f",ponto.x);
	printf("\nA coordenada y: %.2f",ponto.y);
	printf("\n");
	
}

struct Coordenadas somar_2_pontos(struct Coordenadas ponto1, struct Coordenadas ponto2){
	struct Coordenadas soma_dos_pontos;
	
	soma_dos_pontos.x = ponto1.x + ponto2.x;
	soma_dos_pontos.y = ponto1.y + ponto2.y;
	
	return soma_dos_pontos;
}

struct Coordenadas subtracao_2_pontos(struct Coordenadas ponto1, struct Coordenadas ponto2){
	struct Coordenadas subtracao_2_pontos;
	
	subtracao_2_pontos.x = ponto1.x - ponto2.x;
	subtracao_2_pontos.y = ponto1.y - ponto2.y;
	
	return subtracao_2_pontos;
}

struct Coordenadas divisao_2_pontos(struct Coordenadas ponto1, struct Coordenadas ponto2){
	struct Coordenadas divisao_2_pontos;
	
	divisao_2_pontos.x = ponto1.x / ponto2.x;
	divisao_2_pontos.y = ponto1.y / ponto2.y;
	
	return divisao_2_pontos;
}

struct Coordenadas multiplicacao_por_escalar(struct Coordenadas ponto1, float escalar){
	struct Coordenadas multiplicacao_por_escalar;
	
	multiplicacao_por_escalar.x = ponto1.x * escalar;
	multiplicacao_por_escalar.y = ponto1.y * escalar;
	
	return multiplicacao_por_escalar;
}



