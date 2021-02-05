#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int d, t, s;
	cin >> d >> t >> s;
	if(s * t >= d) cout << "Yes\n";
	else cout << "No\n";
	return 0;
}
