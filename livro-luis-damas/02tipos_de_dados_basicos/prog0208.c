#include <stdio.h>

main(){
	int conversao_kilo = 1.0E3;
	int conversao_grama = 1.0E6;
	int tonelada_usuario;
	
	printf("Digite em toneladas e converteremos para kilo e grama: ");
	scanf("%d",&tonelada_usuario);
	
	printf("%d toneladas sao %d kilos", tonelada_usuario, tonelada_usuario*conversao_kilo);
	printf("\n%d toneladas sao %d gramas", tonelada_usuario, tonelada_usuario*conversao_grama);
	
	
}