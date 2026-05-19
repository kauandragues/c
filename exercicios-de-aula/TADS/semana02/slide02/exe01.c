#include <stdio.h>
/*
Aula 02 - 17/03/2026
Aluno: github/kauandragues

Faça um programa em C que leia um número inteiro e retorne seu antecessor e seu sucessor.
*/
int main()
{
    int numero;
    scanf("%d", &numero);
    printf("%d %d", numero - 1, numero + 1);
    return 0;
}
