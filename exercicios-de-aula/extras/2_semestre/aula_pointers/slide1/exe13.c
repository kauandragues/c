#include <stdio.h>

void strcat(char s1[], char s2[], char *sres);

int main(){
	char s1 [3] = {'o','l','a'};
	char s2 [6] = {'t','c','h','a','u'};
	char sres [9];
	strcat(s1, s2, sres);
	
	printf("%s",sres);
}

void strcat(char s1[], char s2[], char *sres){
	for(int i = 0; i < 3; i++){
		sres[i] = s1[i];
	}
	for(int i = 0; i < 6; i++){
		sres[i+3] = s2[i];
	}
	
}