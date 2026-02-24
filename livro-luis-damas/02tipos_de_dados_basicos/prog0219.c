#include <stdio.h>

main(){
	float num_real;
	printf("Digite um numero: ");
	scanf("%f",&num_real);
	
	printf("\nParte inteira do numero: %d",(int)num_real);
	printf("\nParte fracionaria do numero: %f",num_real-(int)num_real);
}