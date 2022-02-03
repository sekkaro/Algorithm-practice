#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long
#define INF 1e18

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int a[6];
	for(int i = 0; i < 6; i++){
		cin >> a[i];
	}
	set<int> ids;
	int n;
	cin >> n;
	int b[n], c[n][6];
	for(int i = 0; i < n; i++){
		cin >> b[i];
		for(int j = 0; j < 6; j++){
			int val = b[i] - a[j];
			if(val < 0) val = INF;
			c[i][j] = val;
			ids.insert(val);
		}
		sort(c[i], c[i] + 6);
	}
	set<pair<int, pair<int, int> > > vals;
	for(int i = 0; i < n; i++){
		vals.insert({c[i][0], {i, 0}});
	}
	int ans = INF;
	bool flag = 0;
	for(int id:ids){
		while(vals.begin()->first < id){
			auto tmp = *vals.begin();
			vals.erase(tmp);
			if(tmp.second.second == 5){
				flag = 1;
				break;
			}
			vals.insert({c[tmp.second.first][tmp.second.second + 1], {tmp.second.first, tmp.second.second + 1}});
		}
		if(flag) break;
		ans = min(ans, vals.rbegin()->first - id);
	}
	cout << ans << '\n';
	return 0;
}
