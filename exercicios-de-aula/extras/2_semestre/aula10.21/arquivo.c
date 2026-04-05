#include <stdio.h>

int main(){
    char aux;
    FILE *arquivo, *saida;
    arquivo = fopen("teste.txt","r");
    saida = fopen("saida.txt", "w");

    if(arquivo == NULL){
        printf("Arquivo não encontrado!");

    }else{
        while(fscanf(arquivo, "%c", &aux) != EOF){
            printf("%c", aux);
        }

        rewind(arquivo);

        while(fscanf(arquivo, "%c", &aux) != EOF){
            fprintf(saida, "%c", aux);
        }

        fclose(arquivo);
        fclose(saida);
    }

}