#include <stdio.h>

int main(){
	int opcao;
	while (opcao != 5){
		printf("\n\n1-Espaguete\n2-Pastel\n3-Feijoada\n4-Legumes\n5-Sair\n\nDigite uma opcao: ");
		scanf("%d",&opcao);
		switch(opcao){
			case 1:
				printf("\nVoce escolheu o espaguete");
				break;
			case 2:
				printf("\nVoce escolheu o pastel");
				break;
			case 3:
				printf("\nVoce escolheu a feijoada");
				break;
			case 4:
				printf("\nVoce escolheu os legumes");
				break;
		}
	}
	return 0;
}