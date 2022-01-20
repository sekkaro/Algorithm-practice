#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long
 
signed main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int x, y;
	cin >> x >> y;
	if(abs(x - y) < 3) cout << "Yes\n";
	else cout << "No\n";
}
