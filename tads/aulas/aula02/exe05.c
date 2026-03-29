/*
Aula 02 - Exercício 05
Aluno: github/kauandragues

Elabore um programa que solicite ao usuário entrar com o valor do dia, mês e ano (inteiros). Em seguida,
imprima os valores lidos separados por um traço ( - );
*/
#include <stdio.h>
#include <stdlib.h>


int main(){
    int dia, mes, ano;
    printf("Digite o dia:");
    scanf("%d",&dia);

    printf("Digite o mes:");
    scanf("%d",&mes);

    printf("Digite o ano:");
    scanf("%d",&ano);

    printf("%02d - %02d - %04d",dia,mes,ano);

    return 0;
}
