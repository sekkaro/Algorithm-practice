#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> a(n, vector<int> (m, 0)), b(m, vector<int> (n, 0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> a[i][j];
			}
		}
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++){
				cin >> b[i][j];
			}
		}
		int cnt = 0;
		while(cnt < n){
			int i;
			for(i = 0; i < n; i++){
				if(find(a[i].begin(), a[i].end(), b[0][cnt]) != a[i].end()) break;
			}
			for(int j = 0; j < m; j++){
				cout << a[i][j] << ' ';
			}
			cout << '\n';
			cnt++;
		}
	}
	return 0;
}
