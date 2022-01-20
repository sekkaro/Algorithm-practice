#include <bits/stdc++.h>
 
using namespace std;

#define int long long

signed main(void){
	int n;
	cin >> n;
	int ans = 0;
	for(int i = 0; i < n; i++){
		int a, b;
		cin >> a >> b;
		ans += (1.0 * (b - a + 1) / 2) * (a + b); 
	}
	cout << ans << '\n';
	return 0;	
}
