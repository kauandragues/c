#include <stdio.h>

int main(){
	/*int a, b, c = 1;
	scanf("%d %d",&a,&b);
	//2^4
	// 2 * 2 = 4 *2 = 8 * 2 = 16
	
	for(int i = 1; i <= b; i++){
		c = c * a;
	}*/
	
	
	int a, b;
	scanf("%d %d",&a,&b);
	
	int i = b;
	
	for(b = 1; i > 0; i--){
		b = b * a;
	}

	printf("%d",b);
	return 0;
}