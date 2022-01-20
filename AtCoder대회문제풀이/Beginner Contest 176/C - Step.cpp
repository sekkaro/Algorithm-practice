#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int m = a[0], ans = 0;
	for(int i = 1; i < n; i++){
		if(a[i] < m) ans += m - a[i];
		m = max(m, a[i]);
	}
	cout << ans << '\n';
	return 0;
}
