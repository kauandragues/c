/*
Faça um programa que leia dois valores do tipo char. Use um único comando de leitura para isso. Em seguida,
imprima os valores lidos na ordem em que eles foram lidos.
*/
#include <stdio.h>

int main()
{
    char a, b;
    printf("Digite dois caracteres:");
    scanf("%c %c", &a, &b);
    printf("%c %c", a, b);
    return 0;
}