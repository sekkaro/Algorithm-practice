#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if(n % 2020 == 0 || n % 2020 <= n / 2020) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
