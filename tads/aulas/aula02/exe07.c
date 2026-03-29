/*
Aula 02 - Exercício 07
Aluno: github/kauandragues

Faça um programa que leia três caracteres e depois os imprima um em cada linha. Use um único comando
printf() para isso.

*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    char c1, c2, c3;
    printf("Digite 3 caracteres:");
    scanf(" %c %c %c", &c1, &c2, &c3);
    printf("\n%c \n%c \n%c",c1,c2,c3);

    return 0;
}
