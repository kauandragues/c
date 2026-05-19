#include <stdio.h>
#include <string.h>

typedef struct
{
    int matricula;
    char nome[128];
} Aluno;

int main()
{
    Aluno aluno1 = {1001, "Matheus"}, aluno2;

    aluno2 = aluno1;

    printf("Dados do aluno1:");
    printf("\nMatricula: %d", aluno1.matricula);
    printf("\nNome: %s\n", aluno1.nome);

    printf("\nDados do aluno2:");
    printf("\nMatricula: %d", aluno2.matricula);
    printf("\nNome: %s\n", aluno2.nome);

    printf("\nAlterando campo do aluno2...");
    aluno2.matricula = 1003;
    strcpy(aluno2.nome, "Pedro");

    printf("\n\nDados do aluno1:");
    printf("\nMatricula: %d", aluno1.matricula);
    printf("\nNome: %s\n", aluno1.nome);

    printf("\n\nDados do aluno2:");
    printf("\nMatricula: %d", aluno2.matricula);
    printf("\nNome: %s\n", aluno2.nome);

    return 0;
}