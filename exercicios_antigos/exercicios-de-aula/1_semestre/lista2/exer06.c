#include <stdio.h>
/*
int main(){
	int m, n, mdc = 100;
	scanf("%d%d",&m,&n);
	
	
	if(n == 0){
		printf("O mdc entre %d e %d = %d",m,n,m);
	}else{
		if(n < m){
			n += + m;
			m = n - m;
			n -= m;
		}
		for(int i = 2; i <= m; i++){
			if(m % i == 0){
				for(int j = 2; j <= n; j++){
					if(n % j == 0 && j == i){
						mdc = j;
					}
				}
			}
		}
		printf("O mdc entre %d e %d = %d",m,n,mdc);
	}	
}

*/

int main(){
	int m,n,resto_proximo = 1, mdc;
	scanf("%d%d",&m,&n);
	if(n == 0){
		printf("mdc eh: %d",m);
	}else{
		if(n > m){
			m = m + n;
			n = m - n;
			m = m - n;
		}
		while(resto_proximo != 0){
			mdc = m % n;
			m = n;
			n = mdc;
			resto_proximo = m % n;
		}
		printf("O mdc eh: %d",mdc);
	}
	return 0;
}