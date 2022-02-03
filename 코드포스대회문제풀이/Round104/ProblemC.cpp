#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--){
		int n, d = 1;
		cin >> n;
		int ans[n + 1][n + 1];
		vector<bool> vis(n + 1, false);
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				ans[i][j] = 0;
			}
		}
		while(d < (n + 1) / 2){
			for(int i = 1; i <= n; i++){
				vis[i] = false;
			}
			for(int i = 1; i <= n; i++){
				if(!vis[i]){
					int w = i, l = i + d;
					while(!vis[w]){
						vis[w] = true;
						if(w < l) ans[w][l] = 1;
						else ans[l][w] = -1;
						w = l;
						l += d;
						if(w > n) w %= n;
						if(l > n) l %= n;
					}
				}
			}
			d++;
		}
		for(int i = 1; i <= n; i++){
			for(int j = i + 1; j <= n; j++){
				cout << ans[i][j] << ' ';
			}
		}
		cout << '\n';
	}
	return 0;
}
