#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, contador = 0, soma = 0;
    printf("Digite o numero numeros que serao lidos: ");
    scanf("%d", &n);

    while(contador < n){
        int num;
        printf("\nDigite um número para somar: ");
        scanf("%d", &num);
        soma += num;
        contador++;
    }
    printf("\nA soma dos numeros sao: %d", soma);
    return 0;
}
