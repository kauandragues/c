#include <stdio.h>

int main(){
	int a1,a2,a3;
	scanf("%d",&a1);
	scanf("%d",&a2);
	scanf("%d",&a3);
	
	if(a1 <= a2 && a2 <= a3)
		printf("%d %d %d",a1,a2,a3);
	else if(a1 <= a3 && a3 <= a2)
		printf("%d %d %d",a1,a3,a2);
	else if(a2 <= a1 && a1 <= a3)
		printf("%d %d %d",a2,a1,a3);
	else if(a2 <= a3 && a3 <= a1)
		printf("%d %d %d",a2,a3,a1);
	else if(a3 <= a1 && a1 <= a2)
		printf("%d %d %d",a3,a1,a2);
	else if(a3 <= a2 && a2 <= a1)
		printf("%d %d %d",a3,a2,a1);
}