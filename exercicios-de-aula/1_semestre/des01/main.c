// Desafio01 - Beta
//Calcular a circuferencia de um planeta com base no angulo e e distincia entre duas localidades.
//A entrada sera composta pela distancia e o angulo
//A saida sera composta pela circunferencia em estadios e em kilometros.
//Nome: Kaua de Andrade Rodrigues
//RA: 2760482511010
#include <stdio.h>

int main() {
    float distancia, angulo, cir_estadios, cir_km;
    scanf("%f", &distancia);
    scanf("%f", &angulo);

    //calcula a circunferencia do planeta em estadios
    //multiplica a quantidade de vezes que angulo cabe em 360 pela distancia
    cir_estadios = distancia*(360 / angulo);

    //calcula a circunferencia do planeta em km
    //1 estadio eh 176.4 metros, basta multiplicar e converter o resultado para kilometros
    cir_km = (cir_estadios*176.4) / 1000;

    printf("%.1f", cir_estadios);
    printf("\n%.1f", cir_km);
    return 0;
}
