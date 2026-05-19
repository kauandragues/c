/*
Elabore um programa em C que calcule o ano de nascimento de uma pessoa a partir de sua idade e
do ano atual.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    const int ano_atual = 2026;
    int idade;

    printf("Digite o sua idade:");
    scanf("%d", &idade);

    printf("Ano de nascimento: %d", ano_atual - idade);
    return 0;
}