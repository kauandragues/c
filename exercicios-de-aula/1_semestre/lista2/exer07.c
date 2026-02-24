#include <stdio.h>

int main(){
	int n, proximoPrimo, anteriorPrimo, ehPrimo = 0;
	scanf("%d",&n);
	
	proximoPrimo = n;
	anteriorPrimo = n;
	
	ehPrimo = 0;
	for(int i = proximoPrimo; ehPrimo == 0; i++){
		ehPrimo = 1;
		for(int j = 2; j < i; j++){
			if(i % j == 0){
				ehPrimo = 0;
				break;
				printf("%d",i,j);
			}
		}
		if(ehPrimo == 1){
			proximoPrimo = i;
			break;
		}
	}
	printf("O proximo primo eh: %d\n", proximoPrimo);

	if(anteriorPrimo < 2){
		printf("O primo não existe", anteriorPrimo);
	}else if(anteriorPrimo == 2){
		printf("O proximo primo eh: %d\n", anteriorPrimo);
	}else{
		ehPrimo = 0;
		for(int i = anteriorPrimo; ehPrimo == 0; i--){
			ehPrimo = 1;
			for(int j = 2; j < i; j++){
				if(i % j == 0){
					ehPrimo = 0;
					break;
				}
			}
			if(ehPrimo == 1){
				anteriorPrimo = i;
				break;
			}
		}
		printf("O primo anterior eh: %d\n", anteriorPrimo);
	}
	
	return 0;
}