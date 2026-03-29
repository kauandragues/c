#include <stdio.h>

int main(){
	char sexo;
	int idade, tempo_contri;
	scanf("%c",&sexo);
	scanf("%d",&idade);
	scanf("%d",&tempo_contri);
	
	if(sexo == 'M' && idade >= 65 && tempo_contri >= 10)
		printf("Aposentavel");
	else if(sexo == 'M' && idade >= 63 && tempo_contri >= 15)
		printf("Aposentavel");
	else if(sexo == 'F' && idade >= 63 && tempo_contri >=10)
		printf("Aposentavel");
	else if(sexo == 'F' && idade >=61 && tempo_contri >=15)
		printf("Aposentavel");
	else
		printf("Nao aposentavel");
	return 0;
}