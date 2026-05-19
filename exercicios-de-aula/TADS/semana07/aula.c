#include <stdio.h>
#include <stdlib.h>

int main()
{
    char texto[] = "Hello World!\n\0";

    printf("%s\n", texto);
    return 0;
}