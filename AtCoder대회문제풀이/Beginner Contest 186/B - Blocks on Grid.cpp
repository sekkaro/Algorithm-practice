#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main(void){
	int n, m;
	cin >> n >> m;
	vector<vector<int> > a(n, vector<int> (m, 0)); 
	int minN = 101;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
			minN = min(minN, a[i][j]);
		}
	}
	int ans = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			ans += (a[i][j] - minN);
		}
	}
	cout << ans << '\n';
	return 0;
}
