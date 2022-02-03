#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long
 
signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--){
		int p, a, b, c;
		cin >> p >> a >> b >> c;
		if(p % a == 0 || p % b == 0 || p % c == 0) cout << "0\n";
		else cout << min(a - p % a, min(b - p % b, c - p % c)) << '\n';
	}
	return 0;
}
