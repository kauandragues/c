#include <stdio.h>

main(){
	int segundos;
	printf("Escreva a quantidade de segundos: ");
	scanf("%d",&segundos);
	
	printf("\nHoras: %d",segundos / 3600);
	printf("\nMinutos: %d",(segundos % 3600) / 60);
	printf("\nsegundos: %d",segundos % 60);
}
