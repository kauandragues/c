#include <stdio.h>

int main(){
	int contador = 0;
	
	for(int d1 = 1; d1 <= 6; d1++){
		for(int d2 = 1; d2 <= 6; d2++){
			for(int d3 = 1; d3 <= 6; d3++){
				for(int d4 = 1; d4 <= 6; d4++){
					printf("%d, %d, %d, %d\n",d1,d2,d3,d4);
					contador++;
				}
			}
		}
		
	}
	
	printf("o total eh: %d",contador);
	
}