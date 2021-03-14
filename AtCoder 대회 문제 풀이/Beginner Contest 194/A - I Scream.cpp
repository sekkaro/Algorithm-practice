#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long
 
signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int a, b;
	cin >> a >> b;
	int ans = 4;
	if(a + b >= 15 && b >= 8) ans = 1;
	else if(a + b >= 10 && b >= 3) ans = 2;
	else if(a + b >= 3) ans = 3;
	cout << ans << '\n'; 
	return 0;
}
