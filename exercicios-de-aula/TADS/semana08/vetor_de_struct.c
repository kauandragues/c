#include <stdio.h>

typedef struct
{
    int matricula;
    char nome[128];

} Aluno;

int main()
{
    Aluno alunos[2] = {{1000, "Kauã"}, {1001, "Matheus"}};

    for (int i = 0; i < sizeof(alunos) / sizeof(alunos[0]); i++)
    {
        printf("Dados do aluno:");
        printf("\nMatricula: %d", alunos[i].matricula);
        printf("\nNome: %s\n\n", alunos[i].nome);
    }

    printf("Agora altere as informações do aluno1!");
    printf("\nDigite a matricula: ");
    scanf("%d", &alunos[0].matricula);
    printf("\nDigite o nome: ");
    scanf(" %s", alunos[0].nome);
    
    for (int i = 0; i < sizeof(alunos) / sizeof(alunos[0]); i++)
    {
        printf("\n Dados do aluno:");
        printf("\nMatricula: %d", alunos[i].matricula);
        printf("\nNome: %s\n\n", alunos[i].nome);
    }
    return 0;
}