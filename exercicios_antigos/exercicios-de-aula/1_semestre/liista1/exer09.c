#include <stdio.h>

int main(){
	int ano;
	scanf("%d",&ano);
	if(ano % 400 == 0)
		printf("O ano %d, eh bissexto",ano);
	else if(ano % 4 == 0 && ano % 100 !=0)
		printf("O ano %d, eh bissexto",ano);
	else
		printf("O ano %d, nao eh bissexto",ano);
	return 0;
}