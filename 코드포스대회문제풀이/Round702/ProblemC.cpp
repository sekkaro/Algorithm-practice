#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--){
		int x;
		cin >> x;
		bool ok = false;
		int l = 1, r = cbrt(x);
		while(l <= r){
			if((l * l * l) + (r * r * r) < x) l++;
			else if((l * l * l) + (r * r * r) > x) r--;
			else {
				ok = true;
				break;
			}
		}
		if(ok) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
