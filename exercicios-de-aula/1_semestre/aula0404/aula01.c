#include <stdio.h>

main(){
	int n, indicar = 1;
	
	scanf("%d",&n);
	
	for(int i = 1; i <= n/2; i++){
		if(n%i == 0){
			indicar = 0;
			break;
		}
	}
	if(indicar = 1){
		printf("Esse numero eh primo");
	}else{
		printf("Esse numero nao eh primo");
	}
}