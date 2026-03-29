#include <stdio.h>
/*
Aluno: github/kauandragues

Números primos de 1 a 100
*/

int main(){
	for(int i = 2; i < 100; i++){
		int eh_primo = 1;
		for(int j = 2; j < (i/2)+1; j++){
			if(i % j == 0)
				eh_primo = 0;
		}
		if(eh_primo)
			printf("%d\n",i);
	}
	return 0;
}