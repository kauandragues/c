#include <stdio.h>
#include <stdlib.h>
void concatStr(char *p1,char *p2, char *sres){


}

void f1(int *x){
    *x *= 10;
    //*x++; //N�o funciona -> Incrementando e depois pegando o conteudo
    (*x)++; //Conteudo, depois acr�scimo
    printf("\nF1(x): %d", *x);
    printf("\n%x", &x);
}


int main()
{
    int x = 10;
    int *px = NULL;//Forma de inicializar o ponteiro sem precisar apontar para lugar nenhum. No caso, aponto para 00, lixo de mem�ria
    printf("%p\n", px);
    px = &x;


    printf("\n%d, %x", x, &x);
    printf("\nValor do ponteiro dentro de px: %d, Valor de px: %x, posicao do px: %x", *px, px, &px);
    *px = 100;
    printf("\n%d", x);
    /*
    px = &px;
    printf("\nValor do ponteiro dentro de px: %p, Valor de px: %x, posicao do px: %x", *px, px, &px);
*/
    //O ponteiro tamb�m ocupa lugar na mem�ria, ent�o tem um ponto de mem�ria alocado para ele e seu pr�prio endere�o
    //Posso fazer um ponteiro para um ponteiro para um ponteiro para um...


    //& -> Endere�o
    int *point = (int *) malloc(sizeof(int));
    printf("\nValor do ponteiro dentro de point: %d, Valor de point: %x, posicao do point: %x", *point, point, &point);


    printf("\nmain(x): %d", x);
    f1(&x);

    printf("\nmain(x): %d", x);

    printf("\n%d", (10 * (*px)));

    char p1[50];
    char p2[50];
    fgets(p1, sizeof(p1), stdin);

    return 0;
}
