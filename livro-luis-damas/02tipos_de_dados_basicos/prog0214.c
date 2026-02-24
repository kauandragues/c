#include <stdio.h>

main(){
	int a;
	
	printf("Digite um numero que sera o convertido em um caracter ASCII: ");
	scanf("%d", &a);
	
	printf("Em ASCII o numero %d eh: %c",a,(char)a);
}