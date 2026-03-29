/*
Aula 02 - Exercício 03
Aluno: github/kauandragues

Faça um programa que leia dois números do tipo float e depois os imprima na ordem inversa em que eles
foram lidos.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    float numero1, numero2;
    printf("Digite um numero:");
    scanf("%f",&numero1);

    printf("Digite um numero:");
    scanf("%f",&numero2);

    printf("\n%f",numero2);
    printf("\n%f",numero1);

    return 0;
}
