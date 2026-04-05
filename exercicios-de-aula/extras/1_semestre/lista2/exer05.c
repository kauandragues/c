#include <stdio.h>

int main(){
	int n, contadora = 1, anterior, ordem = 1;
	scanf("%d",&n);
	
	while(n >= contadora){
		int atual;
		scanf("%d",&atual);
		if(contadora == 1)
			anterior = atual;
		else{
			if(anterior > atual)
				ordem = 0;
		}
		contadora++;
	}
		
	if(ordem == 1)
		printf("Esta na ordem!");
	else if(ordem == 0)
		printf("Nao esta na ordem!");
	return 0;
}