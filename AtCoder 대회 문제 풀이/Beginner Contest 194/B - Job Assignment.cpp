#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long
#define INF 1e11
 
signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	vector<pair<int, int> > p;
	for(int i = 0; i < n; i++){
		int a, b;
		cin >> a >> b;
		p.push_back({a, b});
	}
	int ans = INF;
	for(int i = 0; i < n; i++){
		int x = p[i].first;
		int y = p[i].second;
		for(int j = 0; j < n; j++){
			if(i == j) ans = min(ans, x + y);
			else ans = min(ans, max(x, p[j].second));
		}
		for(int j = 0; j < n; j++){
			if(i == j) ans = min(ans, x + y);
			else ans = min(ans, max(y, p[j].first));
		}
	}
	cout << ans << '\n';
	return 0;
}
