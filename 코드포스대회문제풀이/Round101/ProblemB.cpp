#include <bits/stdc++.h>
 
using namespace std;

#define int long long

signed main(void){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> a(n + 1);
		for(int i = 1; i <= n; i++){
			cin >> a[i];
			a[i] += a[i - 1];
		}
		int m;
		cin >> m;
		vector<int> b(m + 1);
		for(int i = 1; i <= m; i++){
			cin >> b[i];
			b[i] += b[i - 1];
		}
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		int ans = a[n] + b[m];
		cout << max(0LL, ans) << endl;
	}
	return 0;	
}
