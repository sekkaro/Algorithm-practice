#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout<<fixed<<setprecision(15);
	int n;
	cin >> n;
	vector<int> a(n);
	int c = 0, m = 0, e = 0;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		a[i] = abs(x);
		c = max(c, a[i]);
		m += a[i];
		e += a[i] * a[i];
	}
	cout << m << '\n' << sqrt(e) << '\n' << c << '\n';
	return 0;
}
