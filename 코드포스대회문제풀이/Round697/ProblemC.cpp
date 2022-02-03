#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--){
		int a, b, k;
		cin >> a >> b >> k;
		vector<int> an(k), bn(k);
		for(int i = 0; i < k; i++){
			cin >> an[i];
		}
		for(int i = 0; i < k; i++){
			cin >> bn[i];
		}
		vector<int> ac(a + 1), bc(b + 1);
		for(int i = 0; i < k; i++){
			ac[an[i]]++;
			bc[bn[i]]++;
		}
		int ans = 0;
		for(int i = 0; i < k; i++){
			ans += (k - 1) - (ac[an[i]] - 1) - (bc[bn[i]] - 1);
		}
		cout << ans / 2 << '\n';
	}
	return 0;
}
