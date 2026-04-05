#include <stdio.h>

main(){
	int c,x1,x2,x3,x4, contador = 0;
	scanf("%d",&c);
	
	for(int x1 = 0; x1 <= c; x1++){
		for(int x2 = 0; x2 <= c - x1; x2++){
			for(int x3 = 0; x3 <= c - (x1 + x2); x3++){
				x4 = c - (x1 + x2 +x3);
				printf("\n%d, %d, %d, %d",x1,x2,x3,x4);
				contador++;
			}
		}
	}
	
	printf("\n\n%d",contador);
}