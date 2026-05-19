#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Aluno
{
    int matricula;
    char nome[128];
    int estaVivo; // só é possível inicializar aqui dentro em C++
};

int main()
{
    struct Aluno aluno1;

    aluno1.matricula = 1000;
    strcpy(aluno1.nome, "Isabela");
    aluno1.estaVivo = 1;

    printf("Dados do aluno:");
    printf("\nMatricula: %d", aluno1.matricula);
    printf("\nNome: %s", aluno1.nome);
    printf("\nEstá vivo: %s\n", aluno1.estaVivo ? "Sim" : "Não");

    return 0;
}