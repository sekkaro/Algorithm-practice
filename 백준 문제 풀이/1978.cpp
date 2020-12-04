#include <iostream>

#define MAX 1001

using namespace std;

int number = MAX, count = 0, n;
int a[MAX];

void primeNumberSieve(){
	for(int i = 2; i < number; i++){
		a[i] = i;
	}
	for(int i = 2; i < number; i++){
		if(a[i] == 0) continue;
		for(int j = i + i; j <= number; j += i){
			a[j] = 0;
		}
	}
}

int main(void){
	primeNumberSieve();
	cin >> n;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		if(a[x] != 0){
			count++;
		}
	}
	cout << count;
}
