#include <stdio.h>

struct Aluno{
	int RA;
	int idade;
};

void ler_5_aluno();

int main(){
	struct Aluno alunos[5];
	ler_5_alunos(alunos);
	return 0;
}

void ler_5_aluno(){
	
	for(int i = 0; i < 5; i++){
		int RA_aluno;
		int idade_aluno;
		
		printf("\nDigite o RA do aluno:");
		scanf("%d",&RA_aluno);
		
		printf("\nDigite a idade do aluno:")
		scanf("%d",&idade_aluno);
		
		
		
	}
	
}