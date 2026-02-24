#include <stdio.h>

int main(){
	int a,b,resultado = 1;
	scanf("%d%d",&a,&b);
	
	for(int i = 0; i <= b; i++){
		printf("%d ^ %d = %d\n",a,i,resultado);
		resultado = resultado * a;
	}
	return 0;
}