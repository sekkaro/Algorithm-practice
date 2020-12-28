#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main(void){
	int n, m;
	cin >> n >> m;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	int res = 0;
	for(int i = 1; i < n; i++){
		res = __gcd(res, a[i] - a[0]);
	}
	for(int i = 0; i < m; i++){
		int b;
		cin >> b;
		int ans = __gcd(a[0] + b, res);
		cout << ans << ' ';
	}
	cout << '\n';
	return 0;
}
