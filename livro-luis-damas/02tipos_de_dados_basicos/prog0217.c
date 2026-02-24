#include <stdio.h>

main(){	
	int a,b;
	
	printf("Digite um numero: ");
	scanf("%d",&a);
	
	printf("\nDigite um numero: ");
	scanf("%d",&b);
	
	printf("\n%d + %d = %d",a,b,a+b);
	printf("\n%d - %d = %d",a,b,a-b);
	printf("\n%d * %d = %d",a,b,a*b);
	printf("\n%d / %d = %.2f",a,b,(float)a / (float)b);
	printf("\n%d %% %d = %d",a,b,a%b);
}