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
		vector<int> c(101);
		for(int i = 0; i < n; i++){
			int x;
			cin >> x;
			c[x]++;
		}
		int ans = 0;
		for(int i = 1; i <= 100; i++){
			if(!ans && c[i]) ans++;
			else if(ans && c[i]) ans += c[i];
		}
		cout << ans - 1 << '\n';
	}
	return 0;
}
