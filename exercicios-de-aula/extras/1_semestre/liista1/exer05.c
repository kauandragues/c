#include <stdio.h>
#include <math.h>

int main(){
	float a,b,c,s,area;
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	
	s = (a+b+c)/2;
	
	if (a == b && b == c){
		printf("Isoceles");
		printf("\nArea: %lf",sqrt(s*(s-a)*(s-b)*(s-c)));
	}else if(a != b && b != c && a != c){
		printf("Escaleno");
		printf("\nArea: %lf",sqrt(s*(s-a)*(s-b)*(s-c)));
	}else{
		printf("Equilatero");
		printf("\nArea: %lf",sqrt(s*(s-a)*(s-b)*(s-c)));
	}
	return 0;
}