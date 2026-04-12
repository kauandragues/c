/*
Faça um programa em C que leia um número inteiro e retorne seu antecessor e seu sucessor.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int a;

    printf("Digite um número:");
    scanf("%d", &a);

    printf("Antecessor: %d\n", a - 1);
    printf("Sucessor: %d", a + 1);

    return 0;
}