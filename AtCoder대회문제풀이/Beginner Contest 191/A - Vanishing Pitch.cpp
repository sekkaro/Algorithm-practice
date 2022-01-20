#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int v, t, s, d;
	cin >> v >> t >> s >> d;
	if(v * t <= d && v * s >= d) cout << "No\n";
	else cout << "Yes\n";
	return 0;
}
