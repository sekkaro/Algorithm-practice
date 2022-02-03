#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		if(n % 2 == 0){
			if(k % n == 0) cout << n << '\n';
			else cout << k % n << '\n'; 
		} else {
			if((((k - 1) / (n / 2)) + k) % n == 0) cout << n << '\n';
			else cout << (((k - 1) / (n / 2)) + k) % n << '\n';
		}
	}
	return 0;
}
