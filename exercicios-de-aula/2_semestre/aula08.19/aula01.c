#include <stdio.h>
#include <string.h>

//passar um vetor como parâmetro é, na verdade, passar o endereço de memória da posição [0]
//já outros tipos primitivos serão copiados para outro endereço de memória, criando uma
//variável nova dentro de outro escopo

//-----------------------------------------------------------------------------------------
//não e possivel retornar um vetor ou matriz de uma função, pois, assim como outros tipos de dados,
//a variável some
//-----------------------------------------------------------------------------------------

//Struct
//tipo um objeto

struct Aluno{
	char nome[45];
	float nota;
};
/*
void f1(int v[]){
	printf("\n%d", &v[0]);
}
*/
int main(){
	struct Aluno a, b;
	
	//int x[] = {10,20,30};
	//f1(x);
	//printf("\n%d", &x[0]);
	
	stpcpy(a.nome, "Kaua");
	a.nota = 10;
	
	stpcpy(b.nome, "Tiliiiuuu");
	b.nota = 5;
	
	printf("%s \n %.2f", a.nome, a.nota);
	
	return 0;
}
