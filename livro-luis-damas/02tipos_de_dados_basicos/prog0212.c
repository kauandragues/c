#include <stdio.h>

main(){
	char usuario_c1, usuario_c2;
	
	printf("Digite um carater: ");
	scanf("%c",&usuario_c1);
	
	printf("\nDigite um segundo carater: ");
	scanf(" %c",&usuario_c2);
	
	printf("\nO primeiro caracter digitado foi: %c",usuario_c1);
	printf("\nO segundo caracter digitado foi: %c",usuario_c2);
}