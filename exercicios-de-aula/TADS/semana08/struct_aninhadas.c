#include <stdio.h>

typedef struct
{
    int x;
    int y;
} Ponto;

typedef struct
{
    Ponto inicio;
    Ponto fim;
} Retangulo;

int main()
{
    Retangulo ret = {{10,20},{30,40}};
    
    return 0;
}