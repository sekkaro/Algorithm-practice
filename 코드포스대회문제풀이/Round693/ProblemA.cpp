#include <bits/stdc++.h>
 
using namespace std;

#define int long long

signed main(void){
	int t;
	cin >> t;
	while(t--){
		int w, h, n;
		cin >> w >> h >> n;
		int ans = 1;
		while(w % 2 == 0){
			w /= 2;
			ans *= 2;
		}
		while(h % 2 == 0){
			h /= 2;
			ans *= 2;
		}
		if(ans >= n) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;	
}
