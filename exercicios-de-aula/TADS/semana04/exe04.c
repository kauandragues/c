/*
Aluno: github/kauandragues

Crie um programa para ler N (vários) números até que a soma dos números seja maior ou igual a
100. Apresente o valor da soma e a quantidade de números necessários para alcançar a soma maior ou
igual a 100.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma_numeros = 0;
    int numero = 0;
    int qtd_numeros = 0;

    while (soma_numeros < 100)
    {
        scanf("%d", &numero);
        soma_numeros = soma_numeros + numero;
        qtd_numeros++;
    }

    printf("\na soma eh igual a %d", soma_numeros);
    printf("\na quantidade de numeros somados foi %d", qtd_numeros);
    return 0;
}