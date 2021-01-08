#include <bits/stdc++.h>
 
using namespace std;

#define int long long

signed main(void){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> a(n);
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		int ans = 0;
		for(int i = n - 1; i >= 0; i--){
			if(i + a[i] < n) a[i] += a[i + a[i]];
			ans = max(ans, a[i]);
		}
		cout << ans << endl;
	}
	return 0;	
}
