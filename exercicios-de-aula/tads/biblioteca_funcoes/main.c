#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int min = 1, max = 6, numero_sorteado;
    srand(time(NULL));
    printf("\nJogando o Dado");
    system("sleep 0.7");
    system("clear");
    printf("\nJogando o Dado.");
    system("sleep 0.7");
    system("clear");
    printf("\nJogando o Dado..");
    system("sleep 0.7");
    system("clear");
    printf("\nJogando o Dado...");
    system("sleep 1");
    system("clear");

    numero_sorteado = min + rand() % (max - min + 1);
    printf("\nO numero sorteado foi %d", numero_sorteado);
    return 0;
}
