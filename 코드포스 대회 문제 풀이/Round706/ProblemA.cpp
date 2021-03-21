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
		string s;
		cin >> n >> k >> s;
		if(k >= ceil(1.0 * n / 2)){
			cout << "NO\n";
			continue;
		}
		if(k == 0){
			cout << "YES\n";
			continue;
		}
		int l = 0, r = n - 1, cnt = 0;
		while(l < r){
			if(s[l] == s[r]) cnt++;
			else break;
			l++;
			r--;
		}
		if(k <= cnt) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
