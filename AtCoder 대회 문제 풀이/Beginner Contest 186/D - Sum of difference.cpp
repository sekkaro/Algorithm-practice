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
	sort(a.begin(), a.end());
	int sum = a[0], ans = 0;
	for(int i = 1; i < n; i++){
		ans += (i * a[i]) - sum;
		sum += a[i];
	}
	cout << ans << '\n';
	return 0;
}
