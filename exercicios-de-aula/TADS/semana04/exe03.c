/*
Aluno: github/kauandragues

Faça um programa que leia um número positivo e imprima seus divisores. Exemplo: os divisores do
número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, i = 1;

    printf("Digite o número:");
    scanf("%d", &numero);

    while (i <= numero)
    {
        if (numero % i == 0)
        {
            printf("\n%d", i);
        }
        i++;
    }
}