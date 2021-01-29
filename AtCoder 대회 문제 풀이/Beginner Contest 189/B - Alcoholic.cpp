#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, x;
	cin >> n >> x;
	long double sum = 0;
	int ans = -1;
	for(int i = 1; i <= n; i++){
		int v, p;
		cin >> v >> p;
		sum += v * p;
		if(ans == -1 && sum > x * 100) ans = i;
	}
	cout << ans << '\n';
	return 0;
}
