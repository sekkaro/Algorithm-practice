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
		if(n % k == 0) cout << 1 << '\n';
		else if(n > k) cout << 2 << '\n';
		else cout << (int)ceil(1.0 * k / n) << '\n';
	}
	return 0;
}
