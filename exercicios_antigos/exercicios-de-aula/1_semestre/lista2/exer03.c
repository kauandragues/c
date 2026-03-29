#include <stdio.h>

int main(){
	int n, somatorio = 0;
	scanf("%d",&n);
	for(int i = 1; i <= n; i++){
		somatorio += i;
	}
	printf("%d",somatorio);
	return 0;
}