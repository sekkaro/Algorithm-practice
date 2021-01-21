#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	int ans = 0;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n / i; j++){
			if(i * j >= n) break;
			ans++;
		}
	}
	cout << ans << '\n';
	return 0;
}
