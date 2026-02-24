#include <stdio.h>

int main(){
	char string[80];
	char stri[10];
	int idade;
	string[0] = 'o';
	string[1] = 'l';
	string[2] = 'a';
	string[3] = '\0';
	
	string[4] = '!';
	
	//scanf("%s",stri); //scanf("%s",&stri[0]); são a mesma coisa, já que a marcara %s é para string
	//e ela precisa da primeira posição da string
	
	fgets(stri, 10, stdin);
	scanf("%d",&idade);
	
	printf("%s\n",stri);
	printf("Idade: %d\n", idade);
	printf("%s\n",string);
	return 0;
}