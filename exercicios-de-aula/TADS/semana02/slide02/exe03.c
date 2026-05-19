/*
Crie um programa em C que leia quatro valores do tipo float. Em seguida, calcule e exiba a média
aritmética desses valores.
*/
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    float a, b, c, d, media = 0;

    printf("Digite 4 valores flutuantes:");
    scanf("%f %f %f %f", &a, &b, &c, &d);

    media = (a + b + c + d) / 4;
    printf("A média aritmética desse valores é %.2f", media);
    return 0;
}