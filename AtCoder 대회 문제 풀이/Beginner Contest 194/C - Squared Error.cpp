#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long
#define MAX 200
 
signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	vector<int> d(2 * MAX + 1);
	for(int i = 0; i < n; i++){
		d[MAX + a[i]]++;
	}
	int ans = 0;
	for(int ai = 0; ai <= MAX * 2; ai++){
		for(int aj = 0; aj < ai; aj++){
			ans += (ai - aj) * (ai - aj) * d[ai] * d[aj];
		}
	}
	cout << ans << '\n';
	return 0;
}
