#include <stdio.h>

main(){
	float pi = 3.1415927, raio, perimetro, area;
	
	printf("Digite o raio da circunferencia: ");
	scanf("%f",&raio);
	
	perimetro = 2*pi*raio;
	area = pi*(raio*raio);
	
	printf("O perimetro da circunferencia eh: %.2f",perimetro);
	printf("\nA area da circunferencia eh: %.2f",area);
}