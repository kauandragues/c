/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    //Normal variables dont point, they are just "related" //"Como precisar ler no indice para char algo num livro"
    //the point of memory in which their "value" is stored
    //Pointers are already the position in memory, they are //->Faster ->"Como já saber onde está o conteúdo específico de um livro"
    //the ones that truly point to the value stored in memory
    
	char a = 'a'; //Size: 8 bits -> 1 byte
	int x = 10; //long int->Size: 64 bits -> 8 bytes int->Size: 32 bits -> 4 bytes
	int *p; //Int Pointer: points to a piece of memory with size of 4 bytes
	p = &x;//Pointing to x
	
	//Leitura de imagens é feita com ponteiros :O

	printf("%d, %x, %o, %b, %d, %x", x, x, x, x, (int)sizeof(x), &x);
    
	printf("\n%c, %x, %o, %b, %ld, %x", a, a, a, a, sizeof(a), &a);
	printf("\n%d", *p);
	*p = 11;
	printf("\n%d", x);

	return 0;
}