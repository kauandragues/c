/*
Escreva um programa que leia um número inteiro e depois imprima a mensagem: “Valor lido:”, seguido do
valor inteiro
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    printf("Digite um numero:");
    scanf("%d", &numero);
    printf("Valor lido: %d", numero);
    return 0;
}