#include <stdio.h>

int main(){
	int a[] = {1,2,3,4,5,6};
	int b[5];
	
	b = a;
	for(int i = 0; i < 5; i++){
		printf("%d\n",b[i]);
	}
	
	return 0;
}