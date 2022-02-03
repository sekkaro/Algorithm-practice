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
		vector<int> a(n), c(3);
		for(int i = 0; i < n; i++){
			cin >> a[i];
			c[a[i] % 3]++;
		}
		int ans = 0;
		while(c[0] < n / 3){
			if(c[2] > n / 3){
				c[2]--;
				c[0]++;
				ans++;
			} else if(c[1] > n / 3){
				c[1]--;
				c[0]++;
				ans += 2;
			}
		}
		while(c[1] < n / 3){
			if(c[0] > n / 3){
				c[0]--;
				c[1]++;
				ans++;
			} else if(c[2] > n / 3){
				c[2]--;
				c[1]++;
				ans += 2;
			}
		}
		while(c[2] < n / 3){
			if(c[1] > n / 3){
				c[1]--;
				c[2]++;
				ans++;
			} else if(c[0] > n / 3){
				c[0]--;
				c[2]++;
				ans += 2;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}
