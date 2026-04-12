/*
Faça um programa que leia um valor do tipo double e depois o imprima na forma de notação científica.
*/
#include <stdio.h>

int main()
{
    double numero;
    printf("Digite um numero:");
    scanf("%lf", &numero);
    printf("Numero em notacao cientifica: %e", numero);
    return 0;
}