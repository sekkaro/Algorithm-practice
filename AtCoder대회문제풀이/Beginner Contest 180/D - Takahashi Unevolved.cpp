#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int x, y, a, b;
	cin >> x >> y >> a >> b;
	y--;
	int maxA = (y - x) / b;
	int maxB = (int)(log(y / x) / log(a));
	int ans = max(maxA, maxB);
	while(maxB > 0){
		ans = max(ans, maxB + ((y - (x * (int) pow(a, maxB))) / b));
		maxB--;
	}
	cout << ans << '\n';
	return 0;
}
