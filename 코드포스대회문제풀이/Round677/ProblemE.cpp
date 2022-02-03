#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long
 
signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	int ans = 1;
	for(int i = 1; i < n / 2; i++){
		ans *= i;
	}
	ans *= ans;
	for(int i = 1; i <= n / 2; i++){
		ans *= (n - i);
		ans /= i;
	}
	cout << ans << '\n';
	return 0;
}
