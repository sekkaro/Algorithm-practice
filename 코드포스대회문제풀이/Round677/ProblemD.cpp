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
		vector<int> a(n), c(n);
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		vector<pair<int, int> > ans;
		for(int i = 0; i < n; i++){
			if(c[i]) continue;
			for(int j = 0; j < n; j++){
				if(i == j) continue;
				if(a[i] != a[j]){
					ans.push_back({i + 1, j + 1});
					c[i] = 1;
					c[j] = 1;
					break;
				}
			}
		}
		if(ans.size() != n - 1) cout << "No\n";
		else {
			cout << "Yes\n";
			for(int i = 0; i < n - 1; i++){
				cout << ans[i].first << ' ' << ans[i].second << '\n';
			}
		}
	}
	return 0;
}
