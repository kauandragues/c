#include <stdio.h>

int main(){
	int n, maior;
	scanf("%d",&n);
	
	for(int i = 1; i <= n; i++){
		int a;
		scanf("%d",&a);
		if(i == 1){
			maior = a;
		}
		if(a > maior){
			maior = a;
		}
	}
	printf("O maior numeoro inserido foi: %d",maior);
	return 0;
}