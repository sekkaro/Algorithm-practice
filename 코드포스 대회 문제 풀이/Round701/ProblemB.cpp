#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, q, k;
	cin >> n >> q >> k;
	vector<int> a(n), b(n), ls(n), rs(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int sum = 0;
	for(int i = 0; i < n; i++){
		int ub = (i < n - 1)?a[i + 1]:k + 1;
		int lb = (i > 0)?a[i - 1]:0;
		ls[i] = ub - 2;
		rs[i] = k + 1 - lb - 2;
		b[i] = sum + (ub - lb - 2);
		sum = b[i];
	}
	for(int i = 0; i < q; i++){
		int l, r;
		cin >> l >> r;
		int ans = 0;
		if(r - l == 0) ans = k - 1;
		else if(r - l == 1) ans = ls[l - 1] + rs[r - 1];
		else ans = ls[l - 1] + rs[r - 1] + b[r - 2] - b[l - 1];
		cout << ans << '\n';
	}
	return 0;
}
