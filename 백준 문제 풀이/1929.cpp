#include <iostream>

using namespace std;

int a[1000001];

int main(void){
	int n, m;
	cin >> m >> n;
	a[1] = 1;
	for(int i = 2; i <= n; i++){
		for(int j = i + i; j <= n; j+=i){
			if(a[j] == 1) continue; 
			else a[j] = 1;
		}
	}
	for(int i = m; i <= n; i++){
		if(a[i] == 0) cout << i << "\n";
	}
	return 0;
}
