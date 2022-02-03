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
		vector<int> a(n);
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		int ans = 0;
		for(int i = 0; i < n - 1; i++){
			int maxN = max(a[i], a[i + 1]);
			int minN = min(a[i], a[i + 1]) * 2;
			int cnt = 0;
			while(minN < maxN){
				minN *= 2;
				cnt++;
			}
			ans += cnt;
		}
		cout << ans << '\n';
	}
	return 0;
}
