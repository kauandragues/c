#include <stdio.h>

int main(){
	int ano1, ano2, mes1, mes2, dia1, dia2;
	
	printf("Primeira Data: ");
	scanf("%d",&dia1);
	scanf("%d",&mes1);
	scanf("%d",&ano1);
	
	printf("Segunda Data: ");
	scanf("%d",&dia2);
	scanf("%d",&mes2);
	scanf("%d",&ano2);
	
	if(ano1 > ano2)
		printf("A data %d/%d/%d eh cronologicamente maior",dia1,mes1,ano1);
	else if(ano2 > ano1)
		printf("A data %d/%d/%d eh cronologicamente maior",dia2,mes2,ano2);
	else if(mes1 > mes2)
		printf("A data %d/%d/%d eh cronologicamente maior",dia1,mes1,ano1);
	else if(mes2 > mes1)
		printf("A data %d/%d/%d eh cronologicamente maior",dia2,mes2,ano2);
	else if(dia1 > dia2)
		printf("A data %d/%d/%d eh cronologicamente maior",dia1,mes1,ano1);
	else if(dia2 > dia1)
		printf("A data %d/%d/%d eh cronologicamente maior",dia2,mes2,ano2);
	else 
		printf("A datas sao iguais");
	return 0;
}