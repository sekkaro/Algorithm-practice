#include <bits/stdc++.h>
 
using namespace std;

#define int long long

signed main(void){
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int ans = 0, s = 0, b = 0, max_b = 0;
	for(int i = 0; i < n; i++){
		b += a[i];
		max_b = max(max_b, b);
		ans = max(ans, s + max_b);
		s += b;
	}
	cout << ans << '\n';
	return 0;	
}
