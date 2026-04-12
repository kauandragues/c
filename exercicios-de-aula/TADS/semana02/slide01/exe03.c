/*
Faça um programa que leia dois números do tipo float e depois os imprima na ordem inversa em que eles
foram lidos.
*/

#include <stdio.h>

int main()
{
    float a, b;
    printf("Digite dois numeros:");
    scanf("%f %f", &a, &b);
    printf("%f %f", b, a);
    return 0;
}