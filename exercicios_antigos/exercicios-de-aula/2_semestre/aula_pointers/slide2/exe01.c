#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int *p = malloc(100*sizeof(int));
	
	for(int i = 0; i < 100; i++){
		p[i] = 2*i;
		printf("%d\n",p[i]);
	}
	
	return 0;
}