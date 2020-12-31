#include <bits/stdc++.h>
 
using namespace std;

#define int long long

signed main(void){
	int t;
	cin >> t;
	while(t--){
		int l, r;
		cin >> l >> r;
		if(l % (r + 1) >= round(1.0 * (r + 1) / 2)) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;	
}
