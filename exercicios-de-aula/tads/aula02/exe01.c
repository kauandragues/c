/*
Aula 02 - Exercício 01
Aluno: github/kauandragues

Escreva um programa que leia um número inteiro e depois imprima a mensagem: “Valor lido:”, seguido do
valor inteiro
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;
    printf("Digite um numero inteiro:");
    scanf("%d",&numero);
    printf("O numero digitado foi: %d",numero);
    return 0;
}
