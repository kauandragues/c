#include <stdio.h>

main(){
	int n;
	printf("Digite um numero: ");
	scanf("%d",&n);
	
	for(int i = 2; i <= n; i++){
		if(n % i == 0)
			printf("\nO valor %d eh divisor de %d",i,n);
		
	}
}	