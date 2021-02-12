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
		vector<int> a(n);
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		int ans = 0;
		while(k--){
			bool ok = true;
			int i;
			for(i = 0; i < n - 1; i++){
				if(a[i] < a[i + 1]){
					a[i]++;
					ok = false;
					break;
				}
			}
			if(ok){
				ans = -1;
				break;
			} else {
				ans = i + 1;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}
