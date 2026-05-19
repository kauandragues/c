#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int matricula;
    char nome[128];
    char sexo;
    float nota;
    double mensalidade;
} Aluno;

int main()
{
    Aluno aluno1;
    Aluno aluno2 = {1001, "Matheus", 'M', 10.0f, 600.00};

    aluno1.matricula = 1000;
    strcpy(aluno1.nome, "Kauã");
    aluno1.sexo = 'M';
    aluno1.nota = 9.6f;
    aluno1.mensalidade = 567.45;

    printf("Dados do aluno1:");
    printf("\nMatricula: %d", aluno1.matricula);
    printf("\nNome: %s", aluno1.nome);
    printf("\nSexo: %c", aluno1.sexo);
    printf("\nNota: %.2f", aluno1.nota);
    printf("\nMensalidade: R$%.2lf\n", aluno1.mensalidade);

    printf("\nDados do aluno2:");
    printf("\nMatricula: %d", aluno2.matricula);
    printf("\nNome: %s", aluno2.nome);
    printf("\nSexo: %c", aluno2.sexo);
    printf("\nNota: %.2f", aluno2.nota);
    printf("\nMensalidade: R$%.2lf\n", aluno2.mensalidade);
    return 0;
}