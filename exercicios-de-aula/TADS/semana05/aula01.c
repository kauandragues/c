#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int quantidade, contador;
    float numero, soma, media;
 
    soma = 0.0f;

    printf("Digite a quantidade de números que serão lidos:");
    scanf("%d", &quantidade);

    for (contador = 1; contador <= quantidade; contador++)
    {
        printf("Digite um número:");
        scanf("%f", &numero);

        soma = soma + numero;
    }

    media = soma / quantidade;

    printf("A média é %.2f\n", media);
    return 0;
}