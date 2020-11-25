#include <stdio.h>

int d[100001];

int dp(int x){
	if(x == 1) return 2;
	if(x == 2) return 2;
	if(d[x] != 0) return d[x];
	if(x % 2 == 0){
		return d[x] = (dp(x - 2) + dp(x - 3)) % 16769023;
	} else {
		return d[x] = (dp(x - 1) + dp(x - 2)) % 16769023; 	
	}	
}

int main(void){
	int n;
	scanf("%d", &n);
	int result = dp(n);
	printf("%d", result);
}
