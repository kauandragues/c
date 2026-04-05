#include <stdio.h>

main(){
	int n, i = 1;
	scanf("%d",&n);
	
	do{
		int j = 1;
		printf("%d\n",i);
		while(j <= i){
			printf("\t");
			j++;
		}
		i++;
	}while(i <= n);
	return 0;
}