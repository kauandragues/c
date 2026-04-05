/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int *p = (int *) malloc(sizeof (int));//memory allocation -> 
    //Função que pede para o sistema operacional alocar um ponto de memória 
    //Ponteiro está apontando para um ponto de mem memória sem variável
    *p = 20;
    
    //& -> referencia a local da memória
    //* -> definição de ponteiro
    
    printf("%d", *p);
    
    
    return 0;
}