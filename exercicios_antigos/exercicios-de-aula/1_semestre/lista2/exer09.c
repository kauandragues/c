#include <stdio.h>

int main(){
	int n, intervalo1=0, intervalo2=0,intervalo3=0, intervalo4=0;
	scanf("%d",&n);
	
	for(int i = 1; i <= n; i++){
		float a;
		scanf("%f",&a);
		if(a >= 0 && a <=25){
			intervalo1++;
		}else if(a >=26 && a <= 50){
			intervalo2++;
		}else if(a >=51 && a <= 75){
			intervalo3++;
		}else if(a >= 76 && a <= 100){
			intervalo4++;
		}
	}
	printf("\nIntervalo [0..25]: %d",intervalo1);
	printf("\nIntervalo [26..50]: %d",intervalo2);
	printf("\nIntervalo [51..75]: %d",intervalo3);
	printf("\nIntervalo [76..100]: %d",intervalo4);

}