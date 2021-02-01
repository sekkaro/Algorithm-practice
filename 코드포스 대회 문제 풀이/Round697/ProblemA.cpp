#include <bits/stdc++.h>
 
using namespace std;
 
#define int unsigned long long
#define MAX 1000000

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if(n % 2 != 0) cout << "YES\n";
		else {
			while(n % 2 == 0 && n > 1){
				n /= 2;
			}
			if(n > 1) cout << "YES\n";
			else cout << "NO\n";
		}
	}
	return 0;
}
