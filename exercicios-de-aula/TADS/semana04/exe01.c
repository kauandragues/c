/*
Aluno: github/kauandragues

Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0
até N em ordem crescente
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, contador = 0;
    scanf("%d", &n);
    while (contador <= n)
    {
        printf("\n%d", contador);
        contador++;
    }
    return 0;
}