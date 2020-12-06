#include <stdio.h>

#define MAX 1000001

using namespace std;

int a[MAX];

int main(void){
	a[1] = 1;
	for(int i = 2; i < MAX; i++){
		for(int j = i*2; j < MAX; j += i){
			if(a[j] == 1) continue;
			else a[j] = 1;
		}
	}
	int n;
	scanf("%d", &n);
	while(n){
		bool find = false;
		for(int i = 3; i <= n/2; i += 2){
			if(a[i] != 1 && a[n - i] != 1){
				printf("%d = %d + %d\n", n, i, n - i);
				find = true;
				break;
			} 
		}
		if(!find){
			printf("Goldbach's conjecture is wrong.\n");	
		}
		scanf("%d", &n);
	}
	return 0;
}
