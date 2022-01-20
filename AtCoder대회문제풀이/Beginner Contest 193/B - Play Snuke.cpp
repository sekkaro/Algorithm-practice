#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long
#define INF 1e10
 
signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	int ans = INF;
	for(int i = 0; i < n; i++){
		int a, p, x;
		cin >> a >> p >> x;
		if(x - a > 0) ans = min(ans, p);
	}
	if(ans == INF) ans = -1;
	cout << ans << '\n';
	return 0;
}
