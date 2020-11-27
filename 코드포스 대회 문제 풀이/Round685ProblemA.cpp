#include <iostream>
#include <cmath>

using namespace std;

#define int long long
#define MAX 31623

int a[MAX];

signed main(void){
	for(int i = 2; i < MAX; i++){
		for(int j = i * 2; j < MAX; j++){
			if(a[j] == 1) continue;
			else a[j] = 1;
		}
	}
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int ans = 0;
		while(n > 1){
			bool isDiv = false;
			for(int i = 2; i <= (int)sqrt(n); i++){
				if(a[i] == 0 && n % i == 0){
					n = i;
					isDiv = true;
					break; 
				}
			}
			if(!isDiv) n--;
			ans++;
		}
		cout << ans << '\n';
	}
	return 0;
}
