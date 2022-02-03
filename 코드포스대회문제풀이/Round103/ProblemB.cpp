#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		vector<int> a(n);
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		int l = 0, r = 1e14;
		while(l < r){
			int mid = (l + r) / 2;
			int sum = a[0] + mid;
			bool ok = true;
			for(int i = 1; i < n; i++){
				int x = sum * k / 100;
				if(a[i] > x){
					ok = false;
					break;
				}
				sum += a[i];
			}
			if(ok) r = mid;
			else l = mid+1;
		}
		cout << l << '\n';
	}
	return 0;
}
