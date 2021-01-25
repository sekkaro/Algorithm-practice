#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long
 
signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	cout << max(a * c, max(b * c, max(a * d, b * d)));
	return 0;
}
