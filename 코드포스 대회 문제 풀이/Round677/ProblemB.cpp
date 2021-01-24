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
		for(int i = 0; i < n; i++){
			if(a[i]){
				int j = i + 1;
				for(; j < n; j++){
					if(a[j]){
						j++;
						break;
					}
					ans++;
				}
				if(!a[j - 1]) ans -= j - i - 1;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}
