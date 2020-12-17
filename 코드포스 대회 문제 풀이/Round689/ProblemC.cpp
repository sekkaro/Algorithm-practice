#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

#define int long long

signed main(void){
	cout << setprecision(6) << fixed;
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		vector<int> a(n);
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		int k = n;
		for(int i = n - 1; i >= 0; i--, k--){
			if(a[i] != i + 1) break;
		}
		double ans = 1;
		for(int i = 0; i < m; i++){
			int r;
			double p;
			cin >> r >> p;
			if(k && r >= k) ans *= (1 - p);
		}
		if(!k) cout << ans << '\n';
		else cout << 1 - ans << '\n';
	}
	return 0;
}
