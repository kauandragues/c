/*
Elabore um programa que solicite ao usuário entrar com o valor do dia, mês e ano (inteiros). Em seguida,
imprima os valores lidos separados por um traço ( - );
*/
#include <stdio.h>

int main()
{
    int dia, mes, ano;
    printf("Digite o dia, mes e ano(separado por espaços):");
    scanf("%d %d %d", &dia, &mes, &ano);

    printf("%02d - %02d - %04d", dia, mes, ano);
    return 0;
}