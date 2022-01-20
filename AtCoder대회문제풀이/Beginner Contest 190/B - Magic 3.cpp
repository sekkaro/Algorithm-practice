#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long

signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, s, d;
	cin >> n >> s >> d;
	bool ok = false;
	for(int i = 0; i < n; i++){
		int x, y;
		cin >> x >> y;
		if(!ok && x < s && y > d) ok = true;
	}
	if(ok) cout << "Yes\n";
	else cout << "No\n";
	return 0;
}
