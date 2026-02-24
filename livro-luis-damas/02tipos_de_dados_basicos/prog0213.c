#include <stdio.h>

main(){
	char usuario_c;
	
	printf("Digite um caracter: ");
	scanf("%c",&usuario_c);
	
	printf("O caracter %c tem ASCII %d",usuario_c, usuario_c);
}