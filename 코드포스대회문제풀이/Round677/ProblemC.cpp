#include <bits/stdc++.h>
 
using namespace std;

#define int long long

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> a(n);
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		int max = 0, ans = -1;
		for(int i = 0; i < n; i++){
			if(a[i] > max && ((i + 1 < n && a[i] > a[i + 1]) || (i - 1 >= 0 && a[i] > a[i - 1]))){
				max = a[i];
				ans = i + 1;
			} 
		}
		cout << ans << '\n';
	}
	return 0;
}
