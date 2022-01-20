#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, x, t;
	cin >> n >> x >> t;
	cout << (int)ceil(1.0 * n / x) * t << '\n';
	return 0;
}
