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
		for(int i = 0; i < n; i++){
			if(i % 2 == 0) cout << -a[n - i - 1] << ' ';
			else cout << a[n - i - 1] << ' ';
		}
		cout << '\n';
	}
	return 0;
}
