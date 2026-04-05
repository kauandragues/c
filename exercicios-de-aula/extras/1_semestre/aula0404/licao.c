#include <stdio.h>
#include <stdbool.h>

main(){
	int n,o;
	scanf("%d",&n);
	
	for(int i = 1; i <= n; i++){
		int a;
		scanf("%d",&a);
		if(i == 1){
			o = a;
			continue;
		}
		if(a < o){
			printf("Nao esta na ordem");
			return;
		}
	}
	printf("Esta na ordem");
}

/*main(){
	int n,o;
	bool ordenado = true;
	
	scanf("%d",&n);
	
	for(int i = 1; i <= n; i++){
		int a;
		scanf("%d",&a);
		if(i == 1){
			o = a;
			continue;
		}
		if(a <= o){
			ordenado = false;
		}else{
			o = a;
		}
	}
	if(ordenado == false){
		printf("Nao esta na ordem");
	}else{
		printf("Esta na ordem");
	}
}*/