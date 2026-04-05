/*
Aula 02 - 17/09/2026
Aluno: github/kauandragues

printf("TEXTO"); -> a função que mostra "TEXTO" na tela.
scanf("%d", &numero); -> a função que lê um número inteiro e atribui o valor à variável "numero"

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float nota1, nota2, media;

    printf("\nDigite sua primeira nota:");
    scanf("%f", &nota1);

    printf("\nDigite sua segunda nota:");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;
    printf("\nA sua média é %.2f\n",media);

    system("pause");

    return 0;
}
