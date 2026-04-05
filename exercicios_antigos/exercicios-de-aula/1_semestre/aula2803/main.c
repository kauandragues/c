#include <stdio.h>

int main() {
    int n = 1, fat =1;
    printf("Digite um numero que deseja calcular o fatoral: ");
    scanf("%d", &n);

    printf("O fatorial de %d eh: ", n);
    for(int i = n; i >= 1; i--){
        n = n * i;
    }
	
	for(int i = 1; i <= n; i++){
		fat = fat * i; 
	}
    printf("%d", n);
	printf("%d", fat);

    return 0;
}
