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
	int ans = 0;
	for(int i = 0; i < n; i++){
		int minN = a[i];
		for(int j = i; j < n; j++){
			minN = min(minN, a[j]);
			ans = max(ans, minN * ((j - i) + 1));
		}
	}
	cout << ans << '\n';
	return 0;
}
