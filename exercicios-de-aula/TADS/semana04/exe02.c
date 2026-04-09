/*
Aluno: github/kauandragues

Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de
N até 0 em ordem decrescente
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Digite o número:");
    scanf("%d", &n);
    while (n >= 0)
    {
        printf("\n%d", n);
        n--;
    }
}