#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long
 
signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		vector<int> a(n), b(m);
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i = 0; i < m; i++){
			cin >> b[i];
		}
		sort(a.begin(), a.end(), greater<int>());
		int ans = 0, i = 0, j = 0;
		while(i < n){
			if(j < m && b[j] < b[a[i] - 1]){
				ans += b[j];
				j++;
			} else{
				ans += b[a[i] - 1];
			}
			i++;
		}
		cout << ans << '\n';
	}
	return 0;	
}
