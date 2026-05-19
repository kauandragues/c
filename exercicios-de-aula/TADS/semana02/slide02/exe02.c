/*
Faça um programa em C que leia três valores inteiros e mostre sua soma.
*/
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int a, b, c, soma = 0;

    printf("Digite 3 números:");
    scanf("%d %d %d", &a, &b, &c);

    soma = a + b + c;
    printf("A soma desse números é %d", soma);
    return 0;
}