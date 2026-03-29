/*
Aula 02 - Exercício 02
Aluno: github/kauandragues

Faça um programa que leia um valor do tipo double e depois o imprima na forma de notação científica.


*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    double numero;
    printf("Digite um numero double:");
    scanf("%lf",&numero);
    printf("O numero digitado em notacao cientifica eh: %e",numero);
    return 0;
}
